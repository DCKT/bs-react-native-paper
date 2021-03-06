type jsIconProps = {
  .
  "color": string,
  "size": float,
  "direction": string,
};

type iconProps = {
  color: string,
  size: float,
  direction: string,
};

type renderIcon = jsIconProps => ReasonReact.reactElement;

let renderIcon =
    (reRenderIcon: iconProps => ReasonReact.reactElement): renderIcon =>
  (jsIconProps: jsIconProps) =>
    reRenderIcon({
      color: jsIconProps##color,
      size: jsIconProps##size,
      direction: jsIconProps##direction,
    });

type iconType =
  | Name(string)
  | Element(renderIcon);
