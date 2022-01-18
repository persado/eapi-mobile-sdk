# eapi-mobile-sdk
Mobilesdk is an api client for persadoAPI for serving and tracking

## Preview

## Download

### Repository

You can download this library from MavenCentral.

* Maven github repository

You can download this from `0.1`.  
Package name is `com.persado.enterprise.apiclient`

```groovy
repositories {
    maven {
        url = uri("https://maven.pkg.github.com/persado/eapi-mobile-sdk")
    }
}
```

### Android

Add the dependency to your dependencies

* groovy

```groovy
    dependencies {
        // ...
        implementation "com.persado.enterprise.apiclient:mobilesdk-android:0.1"
    }
```

* kts

```kotlin
    dependencies {
        implementation("com.persado.enterprise.apiclient:mobilesdk-android:0.1")
    }
```

Add permissions to AndroidManifest.xml
```xml
<manifest>
    <uses-permission android:name="android.permission.ACCESS_NETWORK_STATE"/>
    <uses-permission android:name="android.permission.INTERNET" />
</manifest>
```

### Kotlin Multiplatform Application

```kotlin
  sourceSets {
    val commonMain by getting {
      dependencies {
        implementation("com.persado.enterprise.apiclient:mobilesdk:0.1")
      }
    } 
  }
```
For Kotlin Kotlin Multiplatform Application you can follow the Android guide and write your code in shared project inside 
the commonMain both for iOS and Android. Make sure you add the correct dependency and the permissions in the manifest for the Android app

### Initialize

You must initialize the PSDClient in your module.

#### Android - Kotlin Multiplatform

```kotlin
//synchronized
    PSDClient.Builder("your app-id").build().initialize()
    // optional values env default PROD for production 
    // qaMode default false true for getting non Live campaigns
    PSDClient.Builder("your app-id").env(Environment.LOCAL).qaMode(true).build().initialize()
//asynchronous
    PSDClient.Builder("your app-id").build().initialize{/* callback method here*/ }
    // optional values env default PROD for production 
    // qaMode default false true for getting non Live campaigns
    PSDClient.Builder("your app-id").env(Environment.LOCAL).qaMode(true).build().initialize{/* callback method here*/ }

```

#### iOS

* Write initialize code in your kotlin mpp project.

```java
    PSDClient.Builder(appId: "your app-id").build().initialize()
    // optional values env default PROD for production 
    // qaMode default false true for getting non Live campaigns
    PSDClient.Builder(appId: "0a2a005b-68a4-1d7a-8168-a54fa71f0009").env(value: .local).qaMode(value: true).build().initialize()
```

### How to use

### Android - Kotlin Multiplatform
#### Serving
```kotlin
   fun setPersadoContent(){
       setContentView(R.layout.activity_main)
       val tv: TextView = findViewById(R.id.text_view)
       Platform().platform

       val rest: VariantResponse? = PSDContent().getCampaignContent("324567_qLzxxR0mI0")
       val tp: TouchpointVariantResponse? =
           PSDContent().getTouchpointContent("external_id", "banner")
       if (tp != null) {
           tv.text = tp.content
       }
   }
//synchronized call the method after initialize method 
    PSDClient.Builder("your app-id").build().initialize()
    setPersadoContent()

//asynchronous call the method as a callback in initialization
    PSDClient.Builder("your app-id").build().initialize{setPersadoContent()}

```
#### Tracking
```kotlin
   fun trackPersado(){
      PSDTrack()
        .track(TrackAction.CLICK,"external_id")
      //with env
      PSDTrack().env(Environment.LOCAL)
        .track(TrackAction.VIEW,"external_id")
   }
//synchronized call the method after initialize method 
    PSDClient.Builder("your app-id").build().initialize()
    trackPersado()

//asynchronous call the method as a callback in initialization
    PSDClient.Builder("your app-id").build().initialize{trackPersado()}

```


### Ios

#### Serving
```kotlin


func setPersadoContent() -> Void {
    let touchpoint : TouchpointVariantResponse? =  PSDContent().getTouchpointContent(campaignId: "external_id", touchpointName: "name")
    if touchpoint != nil{
        self.content  = (touchpoint?.content)!
    }
}

//synchronized call the method after initialize method 
    PSDClient.Builder(appId: "your app-id").build().initialize()
    self.setPersadoContent()

//asynchronous call the method as a callback in initialization
    PSDClient.Builder(appId: "your app-id").build().initialize{
        self.setPersadoContent()
    }
```

#### Tracking

```kotlin


func track() -> Void {
  PSDTrack().track(action: .click, campaignId: "external_id")
  //with env
  PSDTrack().env(env: .local).track(action: .view, campaignId: "external_id")
}

//synchronized call the method after initialize method 
    PSDClient.Builder(appId: "your app-id").build().initialize()
    self.track()

//asynchronous call the method as a callback in initialization
    PSDClient.Builder(appId: "your app-id").build().initialize{
        self.track()
    }
```

## Ios manual installation
Prerequisites :Xcode
* Download the valid framework for your case (simulator or release)
* Frameworks are build for ios devices with version 15
* Go to your app "Build Phases" tab and add the framework in "Link Binary with Libraries" section
![](https://github.com/persado/eapi-mobile-sdk/blob/main/images/Screenshot%202022-01-18%20at%202.24.30%20PM.png)
* Open "Build Settings" and in the "Framework search Paths" add the path where the downloaded framework is located ![](https://github.com/persado/eapi-mobile-sdk/blob/main/images/Screenshot%202022-01-18%20at%202.25.30%20PM.png)
* Open "General" tab in the "Frameworks, Libraries, and Embedded Content select Embed & Sign"
* Import the framework in the swift class 
  ```kotlin
   import mobilesdk
  ```
* Follow the instructions in the How to use section
## License

```
BSD 3-Clause License

Copyright (c) 2022, Persado
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright notice, this
   list of conditions and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright notice,
   this list of conditions and the following disclaimer in the documentation
   and/or other materials provided with the distribution.

3. Neither the name of the copyright holder nor the names of its
   contributors may be used to endorse or promote products derived from
   this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
```
