//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SplashBoard/BSDescriptionProviding-Protocol.h>


@class NSMutableSet, NSSet, NSString, XBSnapshotContainerIdentity;

@interface XBApplicationSnapshotGroup : NSObject <NSSecureCoding, BSDescriptionProviding>
{
    NSString *_identifier;
    XBSnapshotContainerIdentity *_containerIdentity;
    NSMutableSet *_snapshots;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSSet *snapshots; // @synthesize snapshots=_snapshots;
@property(copy) XBSnapshotContainerIdentity *containerIdentity; // @synthesize containerIdentity=_containerIdentity;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)_invalidate;
- (_Bool)_validateWithContainerIdentity:(id)arg1;
- (void)_manifestQueueDecode_setStore:(id)arg1;
- (_Bool)removeSnapshot:(id)arg1;
- (void)addSnapshot:(id)arg1;
@property(readonly, copy, nonatomic) NSString *containerPath; // @dynamic containerPath;
@property(readonly, copy) NSString *description;
- (id)_initWithIdentifier:(id)arg1 containerIdentity:(id)arg2;
- (void)_commonInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

