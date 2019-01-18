//
//  Releans
//
//  This file was automatically generated for Releans by APIMATIC v2.0 ( https://apimatic.io ).
//
#import <Foundation/Foundation.h>
#import "Configuration.h"
#import "APIHelper.h"
#import "APIError.h"
#import "BaseController.h"
#import "UnirestClient.h"
#import "HttpContext.h"

@interface SenderController : BaseController

/**
* Completion block definition for asynchronous call to Sender Name Details */
typedef void (^CompletedGetSenderNameDetails)(BOOL success, HttpContext* context, id response, NSError* error);

/**
* Return the details of the sender name.
* @param    mid    Required parameter: The sender id you want its details
*/
- (void) getSenderNameDetailsAsyncWithId:(NSString*) mid
                completionBlock:(CompletedGetSenderNameDetails) onCompleted;

/**
* Completion block definition for asynchronous call to Create Sender Name */
typedef void (^CompletedPostCreateSenderName)(BOOL success, HttpContext* context, NSString* response, NSError* error);

/**
* Create a new sender id to send messages using it
* @param    senderName    Required parameter: Name you want to register as Sender Name
*/
- (void) createSenderNameAsyncWithSenderName:(NSString*) senderName
                completionBlock:(CompletedPostCreateSenderName) onCompleted;

/**
* Completion block definition for asynchronous call to Get all senders */
typedef void (^CompletedGetAllSenders)(BOOL success, HttpContext* context, id response, NSError* error);

/**
* List all senders names associated with the account
*/
- (void) getAllSendersWithCompletionBlock:(CompletedGetAllSenders) onCompleted;

@end