package com.example.dan.timemanagement;

import android.app.Activity;
import android.app.Notification;
import android.app.NotificationManager;
import android.app.PendingIntent;
import android.content.Context;
import android.content.Intent;
import android.content.pm.ActivityInfo;
import android.graphics.BitmapFactory;
import android.security.keystore.UserNotAuthenticatedException;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.AdapterView;
import android.widget.ArrayAdapter;
import android.widget.EditText;
import android.widget.ExpandableListAdapter;
import android.widget.ExpandableListView;
import android.widget.Spinner;
import android.widget.TextView;

import org.w3c.dom.Text;

import java.util.ArrayList;

public class MainActivity extends Activity {


    private int x1 = 0;
    private int x2 = 0;
    private int x3 = 0;
    private Spinner xx;


    private String aa;
    private String bb;
    private String cc;
    private String dd;
    private String ee;

    private EditText a;

    private Spinner spinner;
    private Spinner spinner2;
    private Spinner spinner3;


    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        setRequestedOrientation(ActivityInfo.SCREEN_ORIENTATION_PORTRAIT);

        //1
        spinner = (Spinner) findViewById(R.id.spinner);
// Create an ArrayAdapter using the string array and a default spinner layout
        ArrayAdapter<CharSequence> adapter = ArrayAdapter.createFromResource(this,
                R.array.arr, android.R.layout.simple_spinner_item);
// Specify the layout to use when the list of choices appears
        adapter.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
// Apply the adapter to the spinner
        spinner.setAdapter(adapter);


        spinner2 = (Spinner) findViewById(R.id.spinner2);
// Create an ArrayAdapter using the string array and a default spinner layout
        ArrayAdapter<CharSequence> adapter2 = ArrayAdapter.createFromResource(this,
                R.array.arr2, android.R.layout.simple_spinner_item);
// Specify the layout to use when the list of choices appears
        adapter2.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
// Apply the adapter to the spinner
        spinner2.setAdapter(adapter2);


        spinner3 = (Spinner) findViewById(R.id.spinner3);
// Create an ArrayAdapter using the string array and a default spinner layout
        ArrayAdapter<CharSequence> adapter3 = ArrayAdapter.createFromResource(this,
                R.array.arr3, android.R.layout.simple_spinner_item);
// Specify the layout to use when the list of choices appears
        adapter3.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
// Apply the adapter to the spinner
        spinner3.setAdapter(adapter3);

        aa = spinner.getSelectedItem().toString();
        bb = spinner2.getSelectedItem().toString();
        cc = spinner3.getSelectedItem().toString();


    }


    public void totimer(View view) {
        Intent intent = new Intent(this, TimerActivity.class);

        aa = spinner.getSelectedItem().toString();
        bb = spinner2.getSelectedItem().toString();
        cc = spinner3.getSelectedItem().toString();
        dd = String.valueOf(1);//i
        ee = String.valueOf(1);//w


        intent.putExtra("a", aa);
        intent.putExtra("b", bb);
        intent.putExtra("c", cc);
        intent.putExtra("d", dd);
        intent.putExtra("e", ee);
        startActivity(intent);


    }
}
