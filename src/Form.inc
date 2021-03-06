ROUTINE Form [Type=INC]
#define settingsGlobal ^form.settings
#define formNameParam "FORMNAME"
#define displayProp "DISPLAYPROPERTY"
#define propDisplayNameParam "DISPLAYNAME"
#define orderByParam "FORMORDERBY"
#define objPermParam "OBJPERMISSIONS"

#define formatJSON 		"aeloqtwc"
#define formatJSONSQL	"tw"
#define formatDate		3
#define formatTime		7

#define toJSONClassMethod "toJSON"

#define skipClasses ",Form.Generators,"_$$$adaptorClass_","
#define adaptorClass "Form.Adaptor"
#define fileClass "Form.File"
#define propClass "Form.Field"
#define fileDir $g($$$settingsGlobal("fileDir"), ##class(%Library.File).GetDirectory())

#define ClassSQLTable(%c)    ($$$comClassKeyGet(%c,$$$cCLASSsqlschemaname)_"."_$$$comClassKeyGet(%c,$$$cCLASSsqltablename))

#; Get a Class Parameter from a class
#; #define GetClassParameter(%cls,%parm) $$$comMemberKeyGet(%cls,$$$cCLASSparameter,%parm,$$$cPARAMdefault)
#; #define GetPropertyParameter(%cls,%prop,%parm) $$$comMemberArrayGet(%cls,$$$cCLASSproperty,%prop,$$$cPROPparameter,%parm)


#define get(%name) $get(%request.Data(%name,1))
#define webContext $$$isDefObject(%request)
#define debug (($$$webContext) && ($d(%request.Data("Debug"))))
#define r(%property) %request.Content.##Expression(%property)
#define public ((%request.GetCgiEnv("SERVER_PORT") = 80) || (%request.GetCgiEnv("SERVER_PORT") = 443))
#define private '$$$public

#; Test if object variable is defined and not Null
#define isDefObject(%obj) ($Data(%obj)#2&&$IsObject(%obj))

#define domain "RESTFORMS"
#define domainq """"_$$$domain_""""

#define jsonLabel "JSON@"
