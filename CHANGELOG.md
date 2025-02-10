# CHANGELOG
## 4.15.2 - 10/02/2025
[IMPROVE] Prism and StartView are now displayed in the correct order, StartView is always displayed on top of any format

## 4.15.1 - 26/12/2024

[IMPROVE] Implemented a solution to prevent ST, AdBall, and Strip from appearing simultaneously <br/>
[IMPROVE] Enhanced AdBall visualization when running in UIKit with a Strip on screen <br/>
[IMPROVE] Added padding to the AdBall in the bottom corners to improve UI/UX <br/>
[IMPROVE] Adjusted trash view dimensions to resolve issues with AdBall dragging <br/>
[FIX] Fixed an issue where rules were not executed when a Strip was active 

## 4.15.0 - 26/09/2024

[NEW] Added new install attribution info callback in start session <br/>
[NEW] When a link with the parameter st_open_browser=true is opened in the webview, the url is launched in the browser <br/>
[IMPROVE] Sessions with times less than 10 seconds are discarded

## 4.14.0 - 11/07/2024

[NEW] Added new method `sendDismissedClick` to send clicks when inapp is dismissed.

## 4.13.1 - 21/03/2024

[NEW] Added PrivacyInfo.xcprivacy and XCFramework signature.

## 4.13.0 - 05/02/2024

[NEW] setCurrencyCode method is removed. Currency code is selected in EMMA Dashboard. All prices sent in the order will not be converted by EMMA to a specific currency, they will be interpreted as a unit value. <br/>
[NEW] Added banner offsets (top and bottom). <br/>
[FIX] Minor bugs fixed.

## 4.12.3 - 17/01/2024

[FIX] Fixed Strip not showing in Swift UI based apps.

## 4.12.2 - 12/01/2024

[FIX] Fixed currencyCode other than EUR not being sent in the trackOrder request.

## 4.12.1 - 04/07/2023

[IMPROVE] Added `updatePostbackConversionValue` with lockWindow paramater.

## 4.12.0 - 05/06/2023

[CHANGE] Disabled bitcode support and removed i386 and armv7 architectures. Apple deprecates bitcode with Xcode14: https://developer.apple.com/documentation/xcode-release-notes/xcode-14-release-notes <br/>
[CHANGE] XCode14.1+ required: https://developer.apple.com/news/upcoming-requirements/?id=04252023a </br>
[CHANGE] Updated iOS deployment target to iOS 11. Supported in devices with iOS 11+. <br/>
[IMPROVE] SDK sizes decreased from ~14mb to ~4mb <br/>
[IMPROVE] Support title in push notifications. <br/>
[FIX] Some deep links within StartViews are executed before the startview is closed, causing overlapping ViewControllers. <br/>
[NEW] Support for SKAdNetwork 4. <br/>

## 4.11.4 - 23/03/2023

[FIX] Sometimes the strip is hidden when the view controller is dismissed. The strip is now displayed on all view controllers. <br/>
[NEW] closeStrip method has also been added to give you the freedom to close the strip whenever you want.

## 4.11.3 - 17/01/2023

[REMOVE] Removed support for Apple Search Ads iAd.framework. Only for iOS < 14.3, from version 4.10.2 AdService.framework is used.

## 4.11.2 - 15/11/2022

[NEW] Close webview from web with deeplink ://startview/close. <br/>
[FIX] Fixed bug added in 4.11.1, startview and adball with rules don't work correctly.

## 4.11.1 - 20/10/2022

[FIX] Fixed StartView some times crashes when is inited outside the main thread. <br/>
[FIX] Fixed crash whit nil dates in attribution process.

## 4.11.0 - 05/05/2022

[NEW] Click types for inapp communications Adball and StartView

## 4.10.3 - 24/03/2022

[FIX] Fixed coupon end date not showing.

## 4.10.2 - 03/03/2022

[FIX] Fixed critical crash produced in production only with app with SDK started and request ASA atribution. Versions 4.10.0 and 4.10.1 have been deleted due to affection.

## 4.10.1 - 07/02/2022 [deleted version]

[FIX] Fixed Apple Attribution with AdServices.framework. On iOS 14.3 to 14.8.1 it could produced a hang.

## 4.10.0 - 20/01/2022 [deleted version]

[NEW] Notifications with action buttons

## 4.9.3 - 07/10/2021

[FIX] Fixed problem banner dismiss root viewcontregllar and minor bugs

## 4.9.2 - 27/04/2021

[FIX] In early versions of iOS 14 sometimes the IDFA was not obtained correctly <br/>
[FIX] Fixed bug customerId in purchases added in version 4.9.0

## 4.9.1 - 18/03/2021

[FIX] Fixed EMMAEventRequest as optional when instantiating <br/>

## 4.9.0 - 13/03/2021

[CHANGE] Changed deployment target to iOS 9 <br/>
[NEW] SDK partial rewritten in Swift lenguage. The API has been adpated. <br/>
[NEW] SDK reescrito parcialmente en swift. Se han adaptado varias api's para ser mas convenientes en el lenguaje swift. <br/>
[REMOVE] Removed method `+(void)startSession:(NSString*)appKey withOptions:(NSDictionary*)launchOptions __attribute__((deprecated("Use startSession without options")));`<br/>
[REMOVE] Removed method `+(void) startPushSystem: (NSDictionary*) launchOptions __attribute__((deprecated("Use startPushSystem without parameters")));`<br/>
[REMOVE] Removed method `+(void)startOrder:(NSString*)orderId customerId:(NSString*)customerId totalPrice:(float)totalPrice coupon:(NSString*)coupon;`
[REMOVE] Removed method `+(void)registerUser:(NSString*)userId forMail: (NSString*)mail;` and replaced by optionals. <br/>
[REMOVE] Removed method `+(void)loginUser:(NSString*)userId forMail:(NSString*)mail;` and replaced by optionals. <br/>
[REMOVE]Removed method `+(void)addProduct:(NSString*)productId name:(NSString*)name qty:(float)qty price:(float)price;`<br/>
[REMOVE] Removed method `+(void)addRateAlertForAppStoreURL:(NSString*)appStoreURL;` <br/>
[REMOVE] Removed method`+(void) setRateAlertFreq: (int) hours;` <br/>
[REMOVE] Removed method`+(void) setRateAlertTitle: (NSString*) title;`<br/>
[REMOVE] Removed method `+(void) setRateAlertMessage: (NSString*) message;` <br/>
[REMOVE] Removed method `+(void) setRateAlertCancelButton: (NSString*)>cancelButtonText;` <br/>
[REMOVE] Removed method `+(void) setRateAlertRateItButton: (NSString*) rateItButtonText;` <br/>
[REMOVE] Removed method`+(void) setRateAlertLaterButton: (NSString*) laterButtonText;` <br/>
[REMOVE] Removed method `+(void) setRateAlertShowAfterUpdate:(BOOL) showAlert;` <br/>
[RENAME] Renamed method `EMMA.add(inAppDelegate: self)` to `EMMA.addInAppDelegate(delegate: self)` <br/>
[RENAME] Renamed method ` EMMA.trackEvent(eventRequest)` to `EMMA.trackEvent(request: eventRequest)` <br/>
[RENAME] Renamed method ` EMMA.handleLink(url)`to `EMMA.handleLink(url: url)` <br/>
[RENAME] Renamed method ` EMMA.handlePush(userInfo)` to `EMMA.handleLink(userInfo: userInfo)` <br/>
[RENAME] Renamed method ` EMMA.openNativeAd(nativeAdCampaignId: campaignId)` to `EMMA.opeNativeAd(campaignId: campaignId)`<br/>

[NEW] New method to add inapp plugins

## 4.8.1 - 07/01/2021

[FIX] Fixed crash "Collection was mutated while being enumerated" in campaign controller <br/>
[FIX] Minor bugs fixed

## 4.8.0 - 12/11/2020

[IMPROVE] Changes on device ids management <br/>
[NEW] Method to request IDFA (iOS 14) <br/>
[NEW] New method to update customer id without login or register user <br/>
[FIX] Fixed minor bugs and improves

## 4.6.7 - 11/09/2020

[FIX] Fixed crash tracking some screens with auto event

## 4.6.6 - 23/07/2020

[FIX] This version fixes a crash introduced in 4.6.5

## 4.6.5 - 23/07/2020

[IMPROVE] Inapp delegate callbacks are saved by instance.

## 4.6.4 - 01/07/2020

[NEW] New method to obtain deviceId

## 4.6.3 - 28/05/2020

[FIX] Fixed campaign params in rules

## 4.6.2 - 07/04/2020

[NEW] Click params for install attribution campaigns <br/>
[FIX] Minor bugs

## 4.6.1 - 30/03/2020

[FIX] Fixed the error that caused the device info not to be saved

## 4.6.0 - 27/02/2020

[NEW] Params for campaigns in EMMAInAppMessageDelegate <br/>
[FIX] Startview button sometimes not close <br/>
[FIX] Minor bugs

## 4.5.2 - 09/10/2019

#### Important update for iOS 13 support. Changes in the method of getting push tokens.

[IMPROVE] iOS 13 and xcode 11 adaptation <br/>
[IMPROVE] strip for iphone X series and iphone 11 / 11 pro <br/>
[FIX] Minor bugs

### 4.5.1 - 31/05/2019

[NEW] New method to start session in background <br/>
[FIX] Fixed the bug that caused the button to appear on startviews that could not be closed <br/>
[FIX] Minor bugs fixed

### 4.5.0 - 25/03/2019

[IMPROVE] improves in push notifications <br/>
[FIX] Fixed problem in Short Url Attribution <br/>
[FIX] Fixed redimension problem in animated gifs for banner <br/>
[FIX] Minor bugs

### 4.4.1 - 11/12/2018

[FIX] Native Ad request callback

### 4.4.0 - 04/12/2018

[NEW] New listener for check request status (inapp and event) <br/>
[IMPROVE] Changes on inapp and event requests <br/>
[FIX] Fixed bug that caused the method getUserInfo doesn't return data <br/>
[FIX] Fixed minor bugs

### 4.3.1 - 08/11/2018

[IMPROVE] Performance improvements on requests pool

### 4.3.0 - 07/11/2018

[NEW] Support for short powlink urls <br/>
[NEW] Support to get install attribution info <br/>
[FIX] Location changes <br/>
[FIX] Fixed minor bugs

### 4.2.13 - 17/09/2018

[NEW] Apple Search Ads attribution

### 4.2.12 - 20/08/2018

[FIX] Solved crash that occurs due to memory leak in auto events

### 4.2.11 - 01/08/2018

[FIX] Banner shown time <br/>
[NEW] Retargeting params

### 4.2.10 - 05/05/2018

[FIX] Native ad frecuency crash <br/>
[FIX] Minor bugs fixed

### 4.2.9 - 31/05/2018

[NEW] Unique click retargeting (retargeting 2).

### 4.2.8 - 24/05/2018

[NEW] Enable/disable track screen events.

### 4.2.7 - 23/05/2018

[IMPROVE] GDPR adaptation.

### 4.2.6 - 18/04/2018

[IMPROVE] Changes for new AdWords API

### 4.2.5 - 27/02/2018

[NEW] Multiple Native Ad for a unique template id <br/>
[FIX] Multiples bugs fixed

### 4.2.4 - 21/02/2018

[FIX] Fixed banner in scroll screen

### 4.2.3 - 19/01/2018

[FIX] Fixed bug that performs multiples calls when session isn't started

### 4.2.2 - 10/01/2018

[NEW] New feature Re-Targeting<br>
[IMPROVE] In-app communications improves<br>
[FIX] Fixed deeplink on Dynamic Tab<br>
[FIX] Minor bugs fixes

### 4.2.1 - 26/12/2017

[IMPROVE] Changed the design of StartView close button <br/>
[FIX] Minor bugs fixed

### 4.2.0 - 29/10/2017

[IMPROVE] StartView performance<br>
[FIX] Bugs fixed

### 4.1.3 - 08/10/2017

[FIX] Multiples bugs fixed

### 4.1.2 - 15/09/2017

[FIX] Fix crash updating version.

### 4.1.1 - 15/09/2017

[FIX] Bitcode support

### 4.1.0 - 12/09/2017

[NEW] Native Ads<br>
[NEW] Automated tracking events<br>
[NEW] Modern method structure<br>
[IMPROVE] AdBall positioning & performance<br>
[IMPROVE] Rules: Automatic push now with Deeplinks<br>
[IMPROVE] Behavior & metrics in Messages<br>
[FIX] Bugs fixing

### 4.0.6.1 - 11/08/2017

[NEW] Bitcode support

### 4.0.6 - 29/06/2017

[FIX] Fix iOS 8 crash at start session.<br>
[IMPROVE] Several improvements.

### 4.0.2 - 04/05/2017

[IMPROVE] Improvements on deeplink performance.

### 4.0.1 - 03/05/2017

[FIX] Fixed crash push with deeplink.

### 4.0.0 - 28/04/2017

[NEW] Rules support<br>
[NEW] Event attribute support<br>
[NEW] Swift support<br>
[NEW] SDK now distributed as framework<br>
[IMPROVE] Banner now uses full screen width<br>
[CHANGE] Changed header name to #import <EMMA_iOS/eMMa.h>

### 3.1.9 - 22/02/2017

[IMPROVE] AdBall usability improved. Now AdBall close with a touch out of creativity.
[FIX] Bug fix with startview.

### 3.1.8 - 06/02/2017

[NEW] Added method `[eMMa isAdBallShowing]` to check if AdBall is on screen.

### 3.1.7.1 - 31/01/2017

[FIX] Bug fixed when showing Stripe.

### 3.1.7 - 25/01/2017

[NEW] Added method `[eMMa setWhitelist:(NSArray*)urls]` to limit urls that will be opened by Webviews.<br>
[NEW] In-App communications can open deeplinks.

### 3.1.6.1 - 12/07/2016

[NEW] Added method `[eMMa setAPIeMMaURL:(NSString*) url]` to configure a proxy url.

### 3.1.6 - 12/07/2016

[NEW] Added banner callback:<br>
`[eMMa checkForBannerOnViewController:(UIViewController*)viewController withBlock:(eMMaOnBannerShow)onBannerBlock]`
`[eMMa checkForBannerOnViewcontroller:(UIViewController*)viewController withLabel:(NSString*)label andBlock:(eMMaOnBannerShow)onBannerBlock]`<br>
Add timezone name in communications with EMMA servers.

### 3.1.5.5 - 08/06/2016

Bug fixed with cookie in SDK web.

### 3.1.5.4 - 06/06/2016

Bug fixed when sync with SDK web.

### 3.1.5.2 - 18/05/2016

Improve startSession and startPushSystem.

### 3.1.5.1 - 17/05/2016

Allow push notification permission in anywhere inside app.

### 3.1.5 - 03/05/2016

Added CocoaPods Service.<br>
Bugs fixed.

### 3.1.4 - 06/04/2016

### 3.1.3 - 15/03/2016

### 3.1.2.3 - 14/03/2016

### 3.1.2 - 14/03/2016
