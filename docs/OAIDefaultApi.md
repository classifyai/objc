# OAIDefaultApi

All URIs are relative to *https://api.classifyai.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**createNewModel**](OAIDefaultApi.md#createnewmodel) | **PUT** /models | Create New Model
[**deleteModel**](OAIDefaultApi.md#deletemodel) | **DELETE** /models | Delete Model
[**getModelsList**](OAIDefaultApi.md#getmodelslist) | **GET** /models | Get Models List
[**indexByImageUrl**](OAIDefaultApi.md#indexbyimageurl) | **POST** /index_by_image_url | Index by Using Image URL
[**indexImage**](OAIDefaultApi.md#indeximage) | **POST** /index_image | Index Local Image
[**tagImageByUrl**](OAIDefaultApi.md#tagimagebyurl) | **GET** /predict_by_image_url | Tag Image by Using Image Url
[**tagLocalImage**](OAIDefaultApi.md#taglocalimage) | **POST** /predict | Predict by Image
[**updateModel**](OAIDefaultApi.md#updatemodel) | **POST** /models | Update Model


# **createNewModel**
```objc
-(NSURLSessionTask*) createNewModelWithModelName: (NSString*) modelName
        completionHandler: (void (^)(NSError* error)) handler;
```

Create New Model

Create a new custom image recognition model

### Example 
```objc
OAIDefaultConfiguration *apiConfig = [OAIDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: x-api-key)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"x-api-key"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"x-api-key"];


NSString* modelName = {"model_name":"\"Test model name\""}; // Set a name for your model

OAIDefaultApi*apiInstance = [[OAIDefaultApi alloc] init];

// Create New Model
[apiInstance createNewModelWithModelName:modelName
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling OAIDefaultApi->createNewModel: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **modelName** | **NSString***| Set a name for your model | 

### Return type

void (empty response body)

### Authorization

[x-api-key](../README.md#x-api-key)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteModel**
```objc
-(NSURLSessionTask*) deleteModelWithModelId: (NSString*) modelId
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete Model

Delete Model

### Example 
```objc
OAIDefaultConfiguration *apiConfig = [OAIDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: x-api-key)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"x-api-key"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"x-api-key"];


NSString* modelId = @"modelId_example"; // You can find your model ids from Classify Dashboard.

OAIDefaultApi*apiInstance = [[OAIDefaultApi alloc] init];

// Delete Model
[apiInstance deleteModelWithModelId:modelId
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling OAIDefaultApi->deleteModel: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **modelId** | **NSString***| You can find your model ids from Classify Dashboard. | 

### Return type

void (empty response body)

### Authorization

[x-api-key](../README.md#x-api-key)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getModelsList**
```objc
-(NSURLSessionTask*) getModelsListWithCompletionHandler: 
        (void (^)(NSString* output, NSError* error)) handler;
```

Get Models List

Get the list of of models created 

### Example 
```objc
OAIDefaultConfiguration *apiConfig = [OAIDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: x-api-key)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"x-api-key"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"x-api-key"];



OAIDefaultApi*apiInstance = [[OAIDefaultApi alloc] init];

// Get Models List
[apiInstance getModelsListWithCompletionHandler: 
          ^(NSString* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling OAIDefaultApi->getModelsList: %@", error);
                        }
                    }];
```

### Parameters
This endpoint does not need any parameter.

### Return type

**NSString***

### Authorization

[x-api-key](../README.md#x-api-key)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **indexByImageUrl**
```objc
-(NSURLSessionTask*) indexByImageUrlWithInlineObject: (OAIInlineObject*) inlineObject
        completionHandler: (void (^)(NSError* error)) handler;
```

Index by Using Image URL

Index by Using Image URL

### Example 
```objc
OAIDefaultConfiguration *apiConfig = [OAIDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: x-api-key)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"x-api-key"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"x-api-key"];


OAIInlineObject* inlineObject = [[OAIInlineObject alloc] init]; // 

OAIDefaultApi*apiInstance = [[OAIDefaultApi alloc] init];

// Index by Using Image URL
[apiInstance indexByImageUrlWithInlineObject:inlineObject
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling OAIDefaultApi->indexByImageUrl: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **inlineObject** | [**OAIInlineObject***](OAIInlineObject.md)|  | 

### Return type

void (empty response body)

### Authorization

[x-api-key](../README.md#x-api-key)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **indexImage**
```objc
-(NSURLSessionTask*) indexImageWithModelId: (NSString*) modelId
    tag: (NSString*) tag
    file: (NSURL*) file
        completionHandler: (void (^)(NSString* output, NSError* error)) handler;
```

Index Local Image

Index Local Image

### Example 
```objc
OAIDefaultConfiguration *apiConfig = [OAIDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: x-api-key)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"x-api-key"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"x-api-key"];


NSString* modelId = @"modelId_example"; //  (optional)
NSString* tag = @"tag_example"; //  (optional)
NSURL* file = [NSURL fileURLWithPath:@"/path/to/file"]; //  (optional)

OAIDefaultApi*apiInstance = [[OAIDefaultApi alloc] init];

// Index Local Image
[apiInstance indexImageWithModelId:modelId
              tag:tag
              file:file
          completionHandler: ^(NSString* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling OAIDefaultApi->indexImage: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **modelId** | **NSString***|  | [optional] 
 **tag** | **NSString***|  | [optional] 
 **file** | **NSURL*****NSURL***|  | [optional] 

### Return type

**NSString***

### Authorization

[x-api-key](../README.md#x-api-key)

### HTTP request headers

 - **Content-Type**: multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **tagImageByUrl**
```objc
-(NSURLSessionTask*) tagImageByUrlWithModelId: (NSString*) modelId
    imageUrl: (NSString*) imageUrl
        completionHandler: (void (^)(NSError* error)) handler;
```

Tag Image by Using Image Url

Predict image tags by providing image url

### Example 
```objc
OAIDefaultConfiguration *apiConfig = [OAIDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: x-api-key)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"x-api-key"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"x-api-key"];


NSString* modelId = @"modelId_example"; // Type your trained model id to predict. You get your model's id from Classify Dashboard.
NSString* imageUrl = @"imageUrl_example"; // Provide image url to predict

OAIDefaultApi*apiInstance = [[OAIDefaultApi alloc] init];

// Tag Image by Using Image Url
[apiInstance tagImageByUrlWithModelId:modelId
              imageUrl:imageUrl
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling OAIDefaultApi->tagImageByUrl: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **modelId** | **NSString***| Type your trained model id to predict. You get your model&#39;s id from Classify Dashboard. | 
 **imageUrl** | **NSString***| Provide image url to predict | 

### Return type

void (empty response body)

### Authorization

[x-api-key](../README.md#x-api-key)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **tagLocalImage**
```objc
-(NSURLSessionTask*) tagLocalImageWithFile: (NSURL*) file
    modelId: (NSString*) modelId
        completionHandler: (void (^)(NSError* error)) handler;
```

Predict by Image

Send a local image to tag

### Example 
```objc
OAIDefaultConfiguration *apiConfig = [OAIDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: x-api-key)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"x-api-key"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"x-api-key"];


NSURL* file = [NSURL fileURLWithPath:@"/path/to/file"]; //  (optional)
NSString* modelId = @"modelId_example"; //  (optional)

OAIDefaultApi*apiInstance = [[OAIDefaultApi alloc] init];

// Predict by Image
[apiInstance tagLocalImageWithFile:file
              modelId:modelId
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling OAIDefaultApi->tagLocalImage: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **file** | **NSURL*****NSURL***|  | [optional] 
 **modelId** | **NSString***|  | [optional] 

### Return type

void (empty response body)

### Authorization

[x-api-key](../README.md#x-api-key)

### HTTP request headers

 - **Content-Type**: multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateModel**
```objc
-(NSURLSessionTask*) updateModelWithModelName: (NSString*) modelName
    modelId: (NSString*) modelId
        completionHandler: (void (^)(NSError* error)) handler;
```

Update Model

Update Model Name

### Example 
```objc
OAIDefaultConfiguration *apiConfig = [OAIDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: x-api-key)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"x-api-key"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"x-api-key"];


NSString* modelName = @"modelName_example"; // Model Name
NSString* modelId = @"modelId_example"; // Model id to be renamed.

OAIDefaultApi*apiInstance = [[OAIDefaultApi alloc] init];

// Update Model
[apiInstance updateModelWithModelName:modelName
              modelId:modelId
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling OAIDefaultApi->updateModel: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **modelName** | **NSString***| Model Name | 
 **modelId** | **NSString***| Model id to be renamed. | 

### Return type

void (empty response body)

### Authorization

[x-api-key](../README.md#x-api-key)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

