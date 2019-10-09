# CHANGELOG

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
