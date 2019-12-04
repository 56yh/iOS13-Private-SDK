//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class ISURLBag, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface ISBiometricOptInOperation : ISOperation
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    _Bool _promptUser;
    id /* block */ _resultBlock;
    ISURLBag *_urlBag;
    NSString *_topicName;
    NSString *_userAgent;
}

@property(copy) NSString *userAgent; // @synthesize userAgent=_userAgent;
@property(copy) NSString *topicName; // @synthesize topicName=_topicName;
- (id)_newSourceByStartingTimeoutTimer;
- (void)_updateTouchIDSettingsForAccount:(id)arg1;
- (_Bool)_performOptInDialogOperationWithError:(id *)arg1;
- (_Bool)_performPasscodeDialogOperationWithError:(id *)arg1;
- (void)_performOptInDialogMetricsWithResult:(_Bool)arg1 error:(id)arg2;
- (void)_loadURLBag;
- (void)run;
@property(copy) id /* block */ resultBlock;
@property _Bool promptUser;
- (id)init;

@end
