Installation Instructions
========================
Basically install from drupal-ios-sdk
https://github.com/workhabitinc/drupal-ios-sdk

Needs:
ASIHTTPRequest Classes directory from http://github.com/pokeb/asi-http-request
Reachability from http://github.com/pokeb/asi-http-request (External)

Drupal 7.x installation
==========================
Modules
=======
Services 7.x-3.0-rc3
- requires ctools 7.x
Rest Server PLIST 7.x-1.0
enable rest_server and rest_server_plist

Services
========
Add a new endpoint
* Name: plist_services
* Endpoint title: Plist Services
* Server: REST
* Path to endpoint: plist_services
Save

Now edit resources for plist_services
* Select node
* Select comment
* Select system
* Save
