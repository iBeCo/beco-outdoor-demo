package com.test.beco_outdoor_demo;

import androidx.appcompat.app.AppCompatActivity;

import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;

import com.beco.outdoor.sdk.map.BEMapActivity;
import com.beco.outdoor.sdk.utils.Constants;
import com.beco.outdoor.sdk.utils.LanguageCode;


public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        Button btnBEMapActivity = findViewById(R.id.btnBEMapActivity);
        btnBEMapActivity.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                Intent nav = new Intent(MainActivity.this, BEMapActivity.class);
               nav.putExtra(Constants.LANGUAGE_CODE, LanguageCode.ARABIC.getLanguage());
                startActivity(nav);
            }
        });
    }
}