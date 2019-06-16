[@bs.module] external css: Js.t({..}) as 'a = "./App.module.css";

[@react.component]
let make = () => {
  // Intercom.boot({"app_id": Intercom.appId, "created_at": Js.Date.make()});
  // Intercom.update();
  // // Js.log2("APP_ID: ", Intercom.appId);
  <div className=css##app>
    <header className=css##appHeader>
      <p>
        {React.string("About Page ")}
      </p>
      <a
        className=css##appLink
        href="https://reasonml.github.io/reason-react"
        target="_blank"
        rel="noopener noreferrer">
        {React.string("Learn Reason React")}
      </a>
    </header>
  </div>;
};