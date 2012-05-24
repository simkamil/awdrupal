core = 7.x
api = 2
 
projects[] = drupal  

; Download Instal profile
; ------------------------
projects[awdrupal][type] = profile
projects[awdrupal][download][type] = "git"
projects[awdrupal][download][url] = "git://github.com/alterway/awdrupal.git" 


; Download profile dependencies
; ---------------------------

; Base modules

projects[ctools][subdir] = "contrib"
projects[libraries][subdir] = "contrib"
projects[diff][subdir] = "contrib"
projects[strongarm][subdir] = "contrib"
projects[features][subdir] = "contrib"
projects[token][subdir] = "contrib"
projects[entity][subdir] = "contrib"
projects[views][subdir] = "contrib"
projects[panels][subdir] = "contrib"
projects[context][subdir] = "contrib"
projects[jquery_update][subdir] = "contrib"
projects[menu_attributes][subdir] = "contrib"


; Themes

projects[omega][version] = "3.0"
projects[omega][type] = "theme"
projects[omega][subdir] = "contrib"


; Fields

projects[date][subdir] = "contrib"
projects[link][subdir] = "contrib"


; Performance

projects[entitycache][subdir] = "contrib"


; Publication workflow & input filters

projects[ckeditor][subdir] = "contrib"
projects[imce][subdir] = "contrib"
projects[pathologic][subdir] = "contrib"
projects[linkit][subdir] = "contrib"

; download CKeditor library
libraries[ckeditor][download][type] = "get"
libraries[ckeditor][download][url] = "http://download.cksource.com/CKEditor/CKEditor/CKEditor%203.6.2/ckeditor_3.6.2.tar.gz"
libraries[ckeditor][directory_name] = "ckeditor"
libraries[ckeditor][destination] = "libraries"


; SEO & Security 

projects[pathauto][subdir] = "contrib"
projects[transliteration][subdir] = "contrib"
projects[google_analytics][subdir] = "contrib"
projects[globalredirect][subdir] = "contrib"
projects[metatag][subdir] = "contrib"
projects[xmlsitemap][subdir] = "contrib"


; Backoffice

projects[module_filter][subdir] = "contrib"
projects[admin_menu][subdir] = "contrib"


; Users & Rights management

projects[logintoboggan][subdir] = "contrib"


