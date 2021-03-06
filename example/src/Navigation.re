module Config = {
  type route =
    | Home
    | SnackbarExample
    | SurfaceExample
    | TypographyExample
    | DividerExample
    | SwitchExample
    | RadioButtonExample
    | CheckboxExample
    | ButtonExample
    | ListAccordionExample
    | ListSectionExample
    | FABExample
    | DialogExample
    | CardExample
    | AppbarExample
    | IconButtonExample
    | ProgressBarExample
    | SearchbarExample
    | TouchableRippleExample
    | ChipExample
    | TextInputExample
    | BottomNavigationExample
    | BannerExample;
};

include ReboltNavigation.Navigation.CreateNavigation(Config);
