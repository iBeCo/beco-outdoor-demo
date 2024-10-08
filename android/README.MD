# Beco Outdoor SDK Demo 


Steps to use the outdoor SDK


### Adding Dependency

In Project build.gradle add

```
allprojects{
	repositories{
		maven { url "https://raw.githubusercontent.com/iBeCo/beco-outdoor-sdk-android/release" }
	}
}
```

Then in App build.gradle add

```
dependencies{
	implementation 'com.beco.outdoor:sdk:3.2'
}
```

Sync gradle.

### Configuration File 

You should create a beco-services.json file your project directory with the SDK key and enviornment id

```
{
  "project_info": {
    "api_key": "46e0b696979896d8b1ef4118f0ace9b096dc210c",
    "environment_id": "env-id"
  },
  "search_settings": {
    "base_color": ""
  },
  "configuration_version": "1"
}

```

On subsequent changes to the json file, please clean project and rebuild it before running it.

Please check the sample application for more info

### Adding Environment Json Parsing plugin. 

This is required so as to parse the beco-services.json(containing api key and environment id.(json currently available in the demo)

In Project build.gradle add

```
buildscript {
    repositories {
        maven{
            url uri('https://raw.githubusercontent.com/iBeCo/beco-gradle-plugin/master/repo')
        }
    }
	dependencies {
        classpath "org.beco:config:1.0"
    }
}
```
Finally apply plugin in App build.gradle at the bottom of the file

```
apply plugin: 'org.beco.config'
```
### Add Google Map API Key

```
<meta-data
            android:name="com.google.android.geo.API_KEY"
            android:value="YOUR_GOOGLE_API" />
```

### Add Activities to Manifest

```
<activity android:name="com.beco.outdoor.sdk.map.BEMapActivity"
            android:screenOrientation="portrait"
            />
<activity android:name="com.beco.outdoor.sdk.map.search.BESearchActivity"
            android:screenOrientation="portrait"
            />
```

### Implemention

Call the BEMapActivity as you would any other activity from your class.

For passing the points information to draw route while opening the activity you need to pass the point data along with the intent 

```
import com.beco.outdoor.sdk.utils.Constants;

Intent nav = new Intent(MainActivity.this, BEMapActivity.class);
ArrayList<String> waypointInt = new ArrayList<>();
waypointInt.add("main stage");
waypointInt.add("dry fountain");
nav.putStringArrayListExtra(Constants.WAYPOINT_INTENT,waypointInt);
startActivity(nav);

```

For passing the points information to select a point while opening the activity you need to pass the point data along with the intent 

```
import com.beco.outdoor.sdk.utils.Constants;

Intent nav = new Intent(this, BEMapActivity.class);
nav.putExtra(Constants.POINT_INTENT,"Europe");
startActivity(nav);

```
For passing the parking location and parking point name

```
  Intent nav = new Intent(this, BEMapActivity.class);
  nav.putExtra(Constants.LATITUDE_CODE,lattitude);//lattitude is double
  nav.putExtra(Constants.LONGITUDE_CODE,longitude);//longitude is double
  nav.putExtra(Constants.PARK_NAME_CODE,"Parking point name");
  
```

For Arabic implementation you should pass the below param with the intent


```
nav.putExtra(Constants.LANGUAGE_CODE, LanguageCode.ARABIC.getLanguage());
```

Import Constants and LanguageCode

```
import com.beco.outdoor.sdk.utils.Constants;
import com.beco.outdoor.sdk.utils.LanguageCode;
```
