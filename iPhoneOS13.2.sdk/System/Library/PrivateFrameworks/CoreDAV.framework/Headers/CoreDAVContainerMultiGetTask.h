//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreDAV/CoreDAVTask.h>

#import <CoreDAV/CoreDAVContainerMultiGetSubmittable-Protocol.h>

@class NSError, NSSet, NSString;
@protocol CoreDAVAccountInfoProvider, CoreDAVTaskManager;

@interface CoreDAVContainerMultiGetTask : CoreDAVTask <CoreDAVContainerMultiGetSubmittable>
{
    NSSet *_urls;
    NSString *_appSpecificNamespace;
    NSString *_appSpecificMultiGetNameSpace;
    NSString *_appSpecificMultiGetCommand;
    NSString *_appSpecificDataProp;
    Class _appSpecificDataItemClass;
    _Bool _shouldIgnoreResponseErrors;
    NSSet *_additionalPropElements;
    NSSet *_parsedContents;
    NSSet *_missingURLs;
    NSSet *_deletedURLs;
}

@property(readonly, nonatomic) NSSet *deletedURLs; // @synthesize deletedURLs=_deletedURLs;
@property(readonly, nonatomic) NSSet *missingURLs; // @synthesize missingURLs=_missingURLs;
@property(readonly, nonatomic) NSSet *parsedContents; // @synthesize parsedContents=_parsedContents;
@property(nonatomic) _Bool shouldIgnoreResponseErrors; // @synthesize shouldIgnoreResponseErrors=_shouldIgnoreResponseErrors;
@property(retain, nonatomic) NSSet *additionalPropElements; // @synthesize additionalPropElements=_additionalPropElements;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)copyDefaultParserForContentType:(id)arg1;
- (id)requestBody;
- (id)httpMethod;
- (void)setAdditionalProperties:(id)arg1 onDataItem:(id)arg2;
- (id)copyAdditionalPropElements;
- (id)initWithURLs:(id)arg1 atContainerURL:(id)arg2 appSpecificDataItemClass:(Class)arg3;

// Remaining properties
@property(nonatomic) id <CoreDAVAccountInfoProvider> accountInfoProvider;
@property(copy, nonatomic) id /* block */ completionBlock;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSError *error;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;
@property(nonatomic) id <CoreDAVTaskManager> taskManager;
@property(nonatomic) double timeoutInterval;

@end

