[@react.component]
let make = () => {
  let url = ReasonReactRouter.useUrl();

  switch (url.path) {
  | [] => <App />
  | ["about"] => <About />
  | _ => <Error code=404 />
  };
};