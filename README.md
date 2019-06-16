# Testing Intercom.io with ReasonML

## Steps

1. Add a your intercom script to `index.html`. See <https://www.intercom.com/help/articles/170-integrate-intercom-in-a-single-page-app>

2. Create a binding to read it from the window:

```reason
// Intercom.re
[@bs.val]
external appId : string = "APP_ID";

[@bs.val]
external intercom : string => 'a => unit = "Intercom";

let boot = (data) => intercom("boot", data);

let track = (event) => intercom("trackEvent", event)
```

3. In `Index.re` call Intercom to get it on the page:

```reason
  Intercom.boot({"app_id": Intercom.appId, "created_at": Js.Date.make()});
```

4. Ignoring undefined error in `App.bs.js`. Add `.eslintignore` to project root then add `*.bs.js` to it.
