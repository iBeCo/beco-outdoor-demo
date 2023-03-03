package com.test.beco_outdoor_demo;

import androidx.appcompat.app.AppCompatActivity;

import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;

import com.beco.outdoor.sdk.map.BEMapActivity;
import com.beco.outdoor.sdk.utils.Constants;
import com.beco.outdoor.sdk.utils.LanguageCode;

import java.util.ArrayList;


public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        Button btnBEMapActivity = findViewById(R.id.btnBEMapActivity);
        Button btnBEMapActivityIntent = findViewById(R.id.btnBEMapActivityIntent);
        Button btnBEMapParkingLocation = findViewById(R.id.btnBEMapParkLocation);


        btnBEMapActivity.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                Intent nav = new Intent(MainActivity.this, BEMapActivity.class);
               nav.putExtra(Constants.LANGUAGE_CODE, LanguageCode.ENGLISH.getLanguage());
                startActivity(nav);
            }
        });

        //Intent for parking location and name
        btnBEMapParkingLocation.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v){
                Intent parkingDetails = new Intent(MainActivity.this, BEMapActivity.class);
                parkingDetails.putExtra(Constants.LATITUDE_CODE,25.0683);//25.0683 10.011920
                parkingDetails.putExtra(Constants.LONGITUDE_CODE,55.3092);//55.3092 76.361068
                parkingDetails.putExtra(Constants.PARK_NAME_CODE,"Parking location");
                parkingDetails.putExtra(Constants.LANGUAGE_CODE, LanguageCode.ENGLISH.getLanguage());
                startActivity(parkingDetails);
            }

        });

        btnBEMapActivityIntent.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Intent nav = new Intent(MainActivity.this, BEMapActivity.class);
                ArrayList<String> waypointInt = new ArrayList<>();
                waypointInt.add("Bahrain");
                waypointInt.add("Dragon Lake");
                nav.putStringArrayListExtra(Constants.WAYPOINT_INTENT,waypointInt);
                nav.putExtra(Constants.LANGUAGE_CODE, LanguageCode.ENGLISH.getLanguage());
                startActivity(nav);
            }
        });

    }
}