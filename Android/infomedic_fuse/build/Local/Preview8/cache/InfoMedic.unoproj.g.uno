sealed class InfoMedic_FuseControlsTextControl_string_Value_Property: Uno.UX.Property<string>
{
    Fuse.Controls.TextControl _obj;
    public InfoMedic_FuseControlsTextControl_string_Value_Property(Fuse.Controls.TextControl obj) { _obj = obj; obj.ValueChanged += this.OnValueChanged; }
    protected override string OnGet() { return _obj.Value; }
    protected override void OnSet(string v, object origin) { _obj.SetValue(v, origin); }
    protected override void OnAddListener(Uno.UX.ValueChangedHandler<string> listener) { _obj.ValueChanged += listener; }
    protected override void OnRemoveListener(Uno.UX.ValueChangedHandler<string> listener) { _obj.ValueChanged -= listener; }
}
sealed class InfoMedic_FuseNode_bool_IsEnabled_Property: Uno.UX.Property<bool>
{
    Fuse.Node _obj;
    public InfoMedic_FuseNode_bool_IsEnabled_Property(Fuse.Node obj) { _obj = obj;  }
    protected override bool OnGet() { return _obj.IsEnabled; }
    protected override void OnSet(bool v, object origin) { _obj.IsEnabled = v; }
}
