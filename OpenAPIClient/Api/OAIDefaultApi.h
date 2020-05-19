#import <Foundation/Foundation.h>
#import "OAIInlineObject.h"
#import "OAIApi.h"

/**
* Classify
* Classify Custom Image Recognition Service
*
* The version of the OpenAPI document: 1.0.0
* Contact: info@inoven.ai
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/



@interface OAIDefaultApi: NSObject <OAIApi>

extern NSString* kOAIDefaultApiErrorDomain;
extern NSInteger kOAIDefaultApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(OAIApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// Create New Model
/// Create a new custom image recognition model
///
/// @param modelName Set a name for your model
/// 
///  code:200 message:"Successfully created",
///  code:400 message:"Bad request, parameter or format error. Please check your query.",
///  code:401 message:"You are not authorized to create a new model"
///
/// @return void
-(NSURLSessionTask*) createNewModelWithModelName: (NSString*) modelName
    completionHandler: (void (^)(NSError* error)) handler;


/// Delete Model
/// Delete Model
///
/// @param modelId You can find your model ids from Classify Dashboard.
/// 
///  code:200 message:"Successfully Deleted.",
///  code:400 message:"Bad request, parameter or format error. please check your query.",
///  code:401 message:"You are not authorized to delete this model."
///
/// @return void
-(NSURLSessionTask*) deleteModelWithModelId: (NSString*) modelId
    completionHandler: (void (^)(NSError* error)) handler;


/// Get Models List
/// Get the list of of models created 
///
/// 
///  code:200 message:"Query executed succesfully.",
///  code:401 message:"You don't have authorization to get the model list."
///
/// @return NSString*
-(NSURLSessionTask*) getModelsListWithCompletionHandler: 
    (void (^)(NSString* output, NSError* error)) handler;


/// Index by Using Image URL
/// Index by Using Image URL
///
/// @param inlineObject 
/// 
///  code:200 message:"Image Indexed",
///  code:400 message:"Bad request, parameter or format error. Please check your query, image format and image size.",
///  code:401 message:"You are not authorized for this operation."
///
/// @return void
-(NSURLSessionTask*) indexByImageUrlWithInlineObject: (OAIInlineObject*) inlineObject
    completionHandler: (void (^)(NSError* error)) handler;


/// Index Local Image
/// Index Local Image
///
/// @param modelId  (optional)
/// @param tag  (optional)
/// @param file  (optional)
/// 
///  code:200 message:"Image Indexed",
///  code:400 message:"Bad request, parameter or format error. Please check your query, image format and image size.",
///  code:401 message:"You are not authorized for this operation."
///
/// @return NSString*
-(NSURLSessionTask*) indexImageWithModelId: (NSString*) modelId
    tag: (NSString*) tag
    file: (NSURL*) file
    completionHandler: (void (^)(NSString* output, NSError* error)) handler;


/// Tag Image by Using Image Url
/// Predict image tags by providing image url
///
/// @param modelId Type your trained model id to predict. You get your model&#39;s id from Classify Dashboard.
/// @param imageUrl Provide image url to predict
/// 
///  code:200 message:"Custom trained model prediction response.",
///  code:400 message:"Bad request, parameter or format error. Please check your query, image format and image size.",
///  code:401 message:"You are not authorized for this operation."
///
/// @return void
-(NSURLSessionTask*) tagImageByUrlWithModelId: (NSString*) modelId
    imageUrl: (NSString*) imageUrl
    completionHandler: (void (^)(NSError* error)) handler;


/// Predict by Image
/// Send a local image to tag
///
/// @param file  (optional)
/// @param modelId  (optional)
/// 
///  code:200 message:"Custom trained model prediction response.",
///  code:400 message:"Bad request, parameter or format error. Please check your query, image format and image size.",
///  code:401 message:"You are not authorized for this operation."
///
/// @return void
-(NSURLSessionTask*) tagLocalImageWithFile: (NSURL*) file
    modelId: (NSString*) modelId
    completionHandler: (void (^)(NSError* error)) handler;


/// Update Model
/// Update Model Name
///
/// @param modelName Model Name
/// @param modelId Model id to be renamed.
/// 
///  code:200 message:"Successfull",
///  code:400 message:"Bad request, parameter or format error. Please check your query.",
///  code:401 message:"You are not authorized to edit this model."
///
/// @return void
-(NSURLSessionTask*) updateModelWithModelName: (NSString*) modelName
    modelId: (NSString*) modelId
    completionHandler: (void (^)(NSError* error)) handler;



@end
