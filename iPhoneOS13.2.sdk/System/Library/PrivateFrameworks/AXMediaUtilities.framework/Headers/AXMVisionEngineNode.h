//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AXMediaUtilities/AXMDescribing-Protocol.h>


@class NSString;
@protocol AXMVisionEngineNodeConnectionDelegate, OS_dispatch_queue;

@interface AXMVisionEngineNode : NSObject <NSSecureCoding, AXMDescribing>
{
    _Bool _connected;
    _Bool _enabled;
    id <AXMVisionEngineNodeConnectionDelegate> _delegate;
    NSString *_identifier;
    NSObject<OS_dispatch_queue> *_nodeQueue;
}

+ (_Bool)supportsSecureCoding;
+ (id)title;
+ (_Bool)isSupported;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *nodeQueue; // @synthesize nodeQueue=_nodeQueue;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) __weak id <AXMVisionEngineNodeConnectionDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isConnected) _Bool connected; // @synthesize connected=_connected;
- (void)axmAppendRecursiveDescription:(id)arg1 withIndentation:(long long)arg2;
- (id)axmDescription;
- (void)disconnect;
- (void)connect:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)validateVisionKitSoftLinkSymbols;
- (void)freeResources;
- (void)nodeInitialize;
- (id)initWithIdentifier:(id)arg1;
@property(readonly, nonatomic) _Bool requiresVisionFramework;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

