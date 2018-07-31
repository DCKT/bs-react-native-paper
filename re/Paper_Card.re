[@bs.module "react-native-paper"]
external reactClass : ReasonReact.reactClass = "Card";

let make =
    (
      ~elevation: option(int)=?,
      ~theme: option(Js.t({..}))=?,
      ~style: option(Rebolt.Style.t)=?,
      ~onPress: option(Rebolt.RNEvent.NativeEvent.t => unit)=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass,
    ~props=
      Js.Null_undefined.(
        {
          "style": fromOption(style),
          "elevation": fromOption(elevation),
          "theme": fromOption(theme),
          "onPress": fromOption(onPress),
        }
      ),
    children,
  );
