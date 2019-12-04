//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface HFErrorHandler : NSObject
{
    _Bool _presentingAlert;
}

+ (id)_descriptionForHFErrorCode:(long long)arg1;
+ (id)_descriptionForHMErrorCode:(long long)arg1;
+ (id)descriptionLocalizationKeyForError:(id)arg1;
+ (id)sharedHandler;
@property(nonatomic, getter=isPresentingAlert) _Bool presentingAlert; // @synthesize presentingAlert=_presentingAlert;
- (id)_localizedStringOrNilIfNotFoundForKey:(id)arg1;
- (id)_localizedDescriptionForError:(id)arg1 operationType:(id)arg2 options:(id)arg3;
- (id)_localizedTitleForError:(id)arg1 operationType:(id)arg2 options:(id)arg3;
- (_Bool)_isErrorPermanent:(id)arg1 operationType:(id)arg2 options:(id)arg3;
- (_Bool)_isErrorIndicativeOfApplicationBug:(id)arg1 operationType:(id)arg2 options:(id)arg3;
- (_Bool)canIgnoreError:(id)arg1;
- (void)logError:(id)arg1 operationDescription:(id)arg2;
- (void)handleError:(id)arg1 operationType:(id)arg2 options:(id)arg3 retryBlock:(id /* block */)arg4 cancelBlock:(id /* block */)arg5;
- (void)handleError:(id)arg1 retryBlock:(id /* block */)arg2 cancelBlock:(id /* block */)arg3;
- (void)handleError:(id)arg1;
- (id)init;

@end

