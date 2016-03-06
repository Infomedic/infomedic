public partial class MainView: Fuse.App
{
    public partial class Template: Uno.UX.Template<Fuse.Controls.Text>
    {
        internal readonly MainView __parent;
        public Template(MainView parent)
        {
            __parent = parent;
        }
        static Template()
        {
        }
        protected override void OnApply(Fuse.Controls.Text self)
        {
            Fuse.Controls.TextControl.TextColorProperty.SetStyle(self, float4(0.345098f, 0.345098f, 0.345098f, 1f));
        }
    }
    public partial class Template1: Uno.UX.Template<Fuse.Controls.TextInput>
    {
        internal readonly MainView __parent;
        public Template1(MainView parent)
        {
            __parent = parent;
        }
        static Template1()
        {
        }
        protected override void OnApply(Fuse.Controls.TextInput self)
        {
            Fuse.Controls.TextEdit.CaretColorProperty.SetStyle(self, float4(0.345098f, 0.345098f, 0.345098f, 1f));
            Fuse.Controls.TextEdit.PlaceholderColorProperty.SetStyle(self, float4(0.7686275f, 0.7529412f, 0.8039216f, 1f));
            Fuse.Controls.TextControl.TextColorProperty.SetStyle(self, float4(0.345098f, 0.345098f, 0.345098f, 1f));
        }
    }
    InfoMedic_FuseControlsTextControl_string_Value_Property temp_Value_inst;
    InfoMedic_FuseControlsTextControl_string_Value_Property temp1_Value_inst;
    InfoMedic_FuseNode_bool_IsEnabled_Property temp2_IsEnabled_inst;
    static MainView()
    {
    }
    public MainView()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp3 = float4(0.5333334f, 0.4117647f, 0.8980392f, 1f);
        var temp4 = float4(0.3921569f, 0.2784314f, 0.7019608f, 1f);
        var temp5 = float4(0.3921569f, 0.2784314f, 0.5764706f, 1f);
        var temp = new Fuse.Controls.TextInput();
        temp_Value_inst = new InfoMedic_FuseControlsTextControl_string_Value_Property(temp);
        var temp1 = new Fuse.Controls.TextInput();
        temp1_Value_inst = new InfoMedic_FuseControlsTextControl_string_Value_Property(temp1);
        var temp2 = new Fuse.Controls.Button();
        temp2_IsEnabled_inst = new InfoMedic_FuseNode_bool_IsEnabled_Property(temp2);
        var temp6 = new Fuse.iOS.StatusBarConfig();
        var temp7 = new Fuse.Controls.DockPanel();
        var temp8 = new Fuse.Style();
        var temp9 = new Template(this) { Cascade = true, AffectSubtypes = true };
        var temp10 = new Template1(this) { Cascade = true, AffectSubtypes = true };
        var temp11 = new Uno.UX.Resource("C600", temp3);
        var temp12 = new Uno.UX.Resource("C700", temp4);
        var temp13 = new Uno.UX.Resource("CFillFore", temp5);
        var temp14 = new Fuse.Controls.StatusBarBackground();
        var temp15 = new Fuse.Controls.BottomBarBackground();
        var temp16 = new Fuse.Reactive.JavaScript();
        var temp17 = new Fuse.Controls.Grid();
        var temp18 = new Fuse.Controls.StackPanel();
        var temp19 = new Fuse.Controls.Text();
        var temp20 = new Fuse.Controls.Text();
        var temp21 = new Fuse.Controls.Image();
        var temp22 = new Fuse.Controls.StackPanel();
        var temp23 = new Fuse.Reactive.DataBinding<string>(temp_Value_inst, "username");
        var temp24 = new Fuse.Reactive.DataBinding<string>(temp1_Value_inst, "password");
        var temp25 = new Fuse.Reactive.DataBinding<bool>(temp2_IsEnabled_inst, "areCredentialsValid");
        this.ClearColor = float4(1f, 1f, 1f, 1f);
        temp6.Style = Uno.Platform.iOS.StatusBarStyle.Light;
        temp7.Children.Add(temp14);
        temp7.Children.Add(temp15);
        temp7.Children.Add(temp17);
        temp7.Behaviors.Add(temp16);
        temp7.Resources.Add(temp11);
        temp7.Resources.Add(temp12);
        temp7.Resources.Add(temp13);
        temp7.Styles.Add(temp8);
        temp8.Templates.Add(temp9);
        temp8.Templates.Add(temp10);
        global::Fuse.Controls.DockPanel.SetDock(temp14, Fuse.Layouts.Dock.Top);
        global::Fuse.Controls.DockPanel.SetDock(temp15, Fuse.Layouts.Dock.Bottom);
        temp16.Code = "var Observable = require(\"FuseJS/Observable\");\n\n\t\t\tvar username = Observable(\"\");\n\t\t\tvar password = Observable(\"\");\n\n\t\t\tvar areCredentialsValid = Observable(function() {\n\t\t\t\treturn username.value != \"\" && password.value != \"\";\n\t\t\t});\n\n\t\t\tmodule.exports = {\n\t\t\t\tusername: hackamano,\n\t\t\t\tpassword: admin,\n\n\t\t\t\tareCredentialsValid: areCredentialsValid\n\t\t\t};";
        temp16.LineNumber = 18;
        temp16.FileName = "C:\\Users\\mmoraf\\Desktop\\InfoMedic\\InfoMedic\\MainView.ux";
        temp17.Rows = "1*,1*";
        temp17.Children.Add(temp18);
        temp17.Children.Add(temp21);
        temp17.Children.Add(temp22);
        temp18.Alignment = Fuse.Elements.Alignment.VerticalCenter;
        temp18.Children.Add(temp19);
        temp18.Children.Add(temp20);
        temp19.Value = "InfoMedic";
        temp19.FontSize = 50f;
        temp19.Alignment = Fuse.Elements.Alignment.HorizontalCenter;
        temp20.Value = "Administrando la Salud";
        temp20.Alignment = Fuse.Elements.Alignment.HorizontalCenter;
        temp20.Opacity = 0.5f;
        temp21.File = new global::Uno.UX.BundleFileSource(import global::Uno.BundleFile("../../../../Assets/logo_h.png"));
        temp22.Alignment = Fuse.Elements.Alignment.VerticalCenter;
        temp22.Margin = float4(50f, 0f, 50f, 0f);
        temp22.Children.Add(temp);
        temp22.Children.Add(temp1);
        temp22.Children.Add(temp2);
        temp.PlaceholderText = "usuario";
        global::Fuse.Controls.Grid.SetRow(temp, 0);
        temp.Behaviors.Add(temp23);
        temp1.IsPassword = true;
        temp1.PlaceholderText = "contraseña";
        global::Fuse.Controls.Grid.SetRow(temp1, 1);
        temp1.Behaviors.Add(temp24);
        temp2.Text = "Log in";
        temp2.Behaviors.Add(temp25);
        this.RootNode = temp7;
        this.Theme = Fuse.BasicTheme.BasicTheme.Singleton;
        this.Behaviors.Add(temp6);
    }
}
