//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmailFoundation/EFLoggable-Protocol.h>

@class NSString, NSUUID;

@interface EFDevice : NSObject <EFLoggable>
{
    _Bool _isInternal;
    NSUUID *_identifier;
}

+ (void)executeWithDeviceIsExternal:(id /* block */)arg1;
+ (void)executeWithDeviceIsInternal:(id /* block */)arg1;
+ (id)testingDeviceWithInternal:(_Bool)arg1;
+ (id)currentDevice;
+ (void)setCurrentDevice:(id)arg1;
+ (id)log;
@property(retain, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property _Bool isInternal; // @synthesize isInternal=_isInternal;
@property(readonly) NSString *platformName;
- (id)_init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

