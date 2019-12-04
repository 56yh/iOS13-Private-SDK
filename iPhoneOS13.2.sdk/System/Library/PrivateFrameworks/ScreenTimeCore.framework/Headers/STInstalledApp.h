//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ScreenTimeCore/STUniquedManagedObject.h>

#import <ScreenTimeCore/STUniquelySerializableManagedObject-Protocol.h>

@class NSData, NSString, STUserDeviceState;

@interface STInstalledApp : STUniquedManagedObject <STUniquelySerializableManagedObject>
{
}

+ (id)fetchOrCreateWithDictionaryRepresentation:(id)arg1 inContext:(id)arg2 error:(id *)arg3;
+ (id)bundleIdentifiersInstalledForDSID:(id)arg1 inContext:(id)arg2 error:(id *)arg3;
- (_Bool)updateWithDictionaryRepresentation:(id)arg1;
- (id)dictionaryRepresentation;
- (id)computeUniqueIdentifier;
- (void)didChangeValueForKey:(id)arg1;

// Remaining properties
@property(copy, nonatomic) NSString *bundleIdentifier; // @dynamic bundleIdentifier;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(copy, nonatomic) NSString *displayName; // @dynamic displayName;
@property(readonly) NSUInteger hash;
@property(copy, nonatomic) NSData *iconData; // @dynamic iconData;
@property(readonly) Class superclass;
@property(retain, nonatomic) STUserDeviceState *userDeviceState; // @dynamic userDeviceState;

@end

