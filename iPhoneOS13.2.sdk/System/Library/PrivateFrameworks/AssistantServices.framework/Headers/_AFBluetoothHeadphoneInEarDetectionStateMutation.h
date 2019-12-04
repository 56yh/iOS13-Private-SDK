//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFBluetoothHeadphoneInEarDetectionStateMutating-Protocol.h>

@class AFBluetoothHeadphoneInEarDetectionState, NSString;

@interface _AFBluetoothHeadphoneInEarDetectionStateMutation : NSObject <AFBluetoothHeadphoneInEarDetectionStateMutating>
{
    AFBluetoothHeadphoneInEarDetectionState *_baseModel;
    _Bool _isEnabled;
    long long _primaryEarbudSide;
    long long _primaryInEarStatus;
    long long _secondaryInEarStatus;
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasIsEnabled:1;
        unsigned int hasPrimaryEarbudSide:1;
        unsigned int hasPrimaryInEarStatus:1;
        unsigned int hasSecondaryInEarStatus:1;
    } _mutationFlags;
}

- (id)generate;
- (void)setSecondaryInEarStatus:(long long)arg1;
- (void)setPrimaryInEarStatus:(long long)arg1;
- (void)setPrimaryEarbudSide:(long long)arg1;
- (void)setIsEnabled:(_Bool)arg1;
- (id)initWithBaseModel:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

