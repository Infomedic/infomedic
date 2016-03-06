package com.example.nativelabs08.infomedicprototipo;

import android.content.Context;
import android.content.Intent;
import android.database.sqlite.SQLiteDatabase;
import android.database.sqlite.SQLiteOpenHelper;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.Gravity;
import android.view.MenuItem;
import android.view.View;
import android.widget.ArrayAdapter;
import android.widget.Button;
import android.widget.EditText;
import android.widget.Spinner;
import android.widget.Toast;
import android.view.Menu;

import java.util.ArrayList;
import java.util.Date;
import java.util.List;

public class registrarActivity extends AppCompatActivity {

    EditText RFC;
    Button consultaRFC;
    EditText nombre;
    EditText UMF;
    EditText fecha;
    Button registrar;
    Spinner spinner;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_registrar);

        RFC=(EditText)findViewById(R.id.editText);
        nombre=(EditText)findViewById(R.id.editText2);
        UMF=(EditText)findViewById(R.id.editText3);
        fecha=(EditText)findViewById(R.id.editText4);
        consultaRFC=(Button)findViewById(R.id.button);
        registrar=(Button)findViewById(R.id.button2);
        addItemsOnSpinner();



        consultaRFC.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                String datoRFC = RFC.getText().toString();
                Toast toast = Toast.makeText(getApplicationContext(), "el RFC es: " + datoRFC, Toast.LENGTH_SHORT);
                toast.show();

            }

        });

        registrar.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                String datoNombre = nombre.getText().toString();
                String datoUMF = UMF.getText().toString();
                String datoDate = fecha.getText().toString();

                String datosGenerales ="El nombre es: \n"+datoNombre+" La UMF es: \n"+datoUMF+" La fecha es: "+datoDate;

                validarCamposVacios(datoNombre,datoUMF,datoDate, datosGenerales);
            }

        });


    }

    
    public void validarCamposVacios(String nombre, String UMF, String fecha, String datos){
        if(nombre.matches("")){
            Toast.makeText(this,"El NOMBRE ESTA VACIO", Toast.LENGTH_LONG).show();
        }
        else if(UMF.matches("")){
            Toast.makeText(getApplicationContext(),"El UMF ESTA BACIO", Toast.LENGTH_LONG).show();
        }
        else if(fecha.matches("")){
            Toast.makeText(getApplicationContext(),"LA FECHA ESTA VACIA", Toast.LENGTH_LONG).show();
        }

        else {
            Toast toast = Toast.makeText(getApplicationContext(), datos, Toast.LENGTH_SHORT);
            toast.show();

            lanzar();
        }
    }
    public void addItemsOnSpinner(){
        spinner=(Spinner) findViewById(R.id.spinner1);
        List<String> list = new ArrayList<String>();
        list.add("Masculino");
        list.add("Femenino");
        ArrayAdapter<String> dataAdapter= new ArrayAdapter<String>(this,android.R.layout.simple_spinner_item, list);
        dataAdapter.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
        spinner.setAdapter(dataAdapter);

    }

    public void lanzar() {
        View view;
        Intent i = new Intent(this, Registro.class);
        startActivity(i);
    }

}
