//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class CDPContext, CDPDevice, NSError;
@protocol CDPStateUIProviderInternal;

@protocol CDPDBackupRecoveryErrorProvider <NSObject>
- (void)handleSoftLimitError:(NSError *)arg1 completion:(void (^)(NSError *))arg2;
- (void)handleHardLimitError:(NSError *)arg1 completion:(void (^)(NSError *))arg2;
- (NSError *)recordNotFoundErrorWithUnderlyingError:(NSError *)arg1;
- (NSError *)verficationFailedErrorwithUnderlyingError:(NSError *)arg1;
- (NSError *)hardLimitErrorForRecord:(CDPDevice *)arg1;
- (NSError *)globalHardLimitErrorWithRecord:(CDPDevice *)arg1;
- (NSError *)globalHardLimitError;
- (NSError *)cooldownErrorWithUnderlyingError:(NSError *)arg1;
- (void)setPrevailingSecret:(NSUInteger)arg1;
- (BOOL)supportsErrorPresentation;
- (id)initWithContext:(CDPContext *)arg1 uiProvider:(id <CDPStateUIProviderInternal>)arg2;
@end

