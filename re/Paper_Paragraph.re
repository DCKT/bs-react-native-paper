[@bs.module "react-native-paper"]
external reactClass : ReasonReact.reactClass = "Paragraph";

let make = (~style: option(Rebolt.Style.t)=?, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass,
    ~props=Js.Null_undefined.({"style": fromOption(style)}),
    children,
  );