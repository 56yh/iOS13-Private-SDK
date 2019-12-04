//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class NSString, NSXPCListener, WBSCyclerServiceProxy;
@protocol WBSCyclerTestTarget;

@interface WBSCyclerConnectionManager : NSObject <NSXPCListenerDelegate>
{
    NSXPCListener *_xpcListener;
    WBSCyclerServiceProxy *_cyclerProxy;
    id <WBSCyclerTestTarget> _testTarget;
}

+ (_Bool)isCyclerEnabled;
@property(readonly, nonatomic) id <WBSCyclerTestTarget> testTarget; // @synthesize testTarget=_testTarget;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)connect;
- (id)initWithTestTarget:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

