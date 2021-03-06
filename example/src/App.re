open BsReactNative;
open Navigation;
open BsReactNativePaper;

module Styles = {
  open Style;
};

let theme =
  Paper.ThemeProvider.(
    createTheme(
      ~colors=
        themeColors(
          ~primary="#6200EE",
          ~accent="#03dac4",
          ~background="#f6f6f6",
          ~surface="white",
          ~error="#B00020",
          ~text="black",
          ~disabled="rgba(0, 0, 0, 0.26)",
          ~placeholder="rgba(0, 0, 0, 0.54)",
          ~backdrop="rgba(0, 0, 0, 0.5)",
        ),
      (),
    )
  );

let component = ReasonReact.statelessComponent("App");

let make = _children => {
  ...component,
  render: _self =>
    <Paper.PaperProvider>
      <Paper.ThemeProvider theme>
        <StackNavigator
          initialState=[|Config.Home|] headerComponent=Header.make>
          ...{
               (~currentRoute, ~navigation) =>
                 switch (currentRoute) {
                 | Config.Home => <Home navigation />
                 | Config.SnackbarExample => <SnackbarExample navigation />
                 | Config.SurfaceExample => <SurfaceExample navigation />
                 | Config.TypographyExample => <TypographyExample navigation />
                 | Config.DividerExample => <DividerExample navigation />
                 | Config.SwitchExample => <SwitchExample navigation />
                 | Config.RadioButtonExample =>
                   <RadioButtonExample navigation />
                 | Config.CheckboxExample => <CheckboxExample navigation />
                 | Config.ButtonExample => <ButtonExample navigation />
                 | Config.ListAccordionExample =>
                   <ListAccordionExample navigation />
                 | Config.ListSectionExample =>
                   <ListSectionExample navigation />
                 | Config.FABExample => <FABExample navigation />
                 | Config.DialogExample => <DialogExample navigation />
                 | Config.CardExample => <CardExample navigation />
                 | Config.AppbarExample => <AppbarExample navigation />
                 | Config.IconButtonExample => <IconButtonExample navigation />
                 | Config.ProgressBarExample =>
                   <ProgressBarExample navigation />
                 | Config.SearchbarExample => <SearchbarExample navigation />
                 | Config.TouchableRippleExample =>
                   <TouchableRippleExample navigation />
                 | Config.ChipExample => <ChipExample navigation />
                 | Config.TextInputExample => <TextInputExample navigation />
                 | Config.BottomNavigationExample =>
                   <BottomNavigationExample navigation />
                 | Config.BannerExample => <BannerExample navigation />
                 }
             }
        </StackNavigator>
      </Paper.ThemeProvider>
    </Paper.PaperProvider>,
};

let reactClass =
  ReasonReact.wrapReasonForJs(~component, _jsProps => make([||]));
