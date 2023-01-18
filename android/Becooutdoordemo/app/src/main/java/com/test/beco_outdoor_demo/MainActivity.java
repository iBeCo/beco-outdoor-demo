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

        btnBEMapActivity.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                Intent nav = new Intent(MainActivity.this, BEMapActivity.class);
               nav.putExtra(Constants.LANGUAGE_CODE, LanguageCode.ENGLISH.getLanguage());
                startActivity(nav);
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