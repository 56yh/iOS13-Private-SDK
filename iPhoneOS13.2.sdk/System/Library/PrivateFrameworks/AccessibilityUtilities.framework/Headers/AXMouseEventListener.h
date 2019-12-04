//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AccessibilityUtilities/AXDeviceMonitorDelegate-Protocol.h>

@class AXDeviceMonitor, AXEventProcessor, NSArray, NSString;
@protocol AXMouseEventListenerDelegate;

@interface AXMouseEventListener : NSObject <AXDeviceMonitorDelegate>
{
    AXDeviceMonitor *_deviceMonitor;
    AXEventProcessor *_eventProcessor;
    NSArray *_cachedMouseDevices;
    id <AXMouseEventListenerDelegate> _delegate;
}

+ (id)sharedInstance;
+ (id)_mouseMatching;
@property(nonatomic) __weak id <AXMouseEventListenerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_handleMouseButtonEvent:(id)arg1;
- (void)deviceMonitorDidDetectDeviceEvent:(id)arg1;
- (void)endFilteringEvents;
- (void)beginFilteringEvents;
- (id)discoveredMouseDevices;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

