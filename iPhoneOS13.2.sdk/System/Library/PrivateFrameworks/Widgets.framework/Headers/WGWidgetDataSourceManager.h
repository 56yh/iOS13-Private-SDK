//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Widgets/WGWidgetVisibilityDelegate-Protocol.h>
#import <Widgets/_WGDataSourceManager-Protocol.h>

@class NSArray, NSString, WGWidgetDataSource, WGWidgetVisibilityManager;
@protocol _WGParentDataSourceManager;

@interface WGWidgetDataSourceManager : NSObject <WGWidgetVisibilityDelegate, _WGDataSourceManager>
{
    WGWidgetDataSource *_widgetDataSource;
    WGWidgetVisibilityManager *_widgetVisbilityManager;
    id _plugInDiscoveryToken;
    _Bool _isPublishing;
    id /* block */ _didStartBlock;
    id <_WGParentDataSourceManager> _parentDataSourceManager;
}

+ (id)discoverAvailableWidgetsWithError:(id *)arg1;
+ (id)_widgetExtensionsDiscoveryAttributes;
@property(retain, nonatomic, getter=_widgetVisbilityManager) WGWidgetVisibilityManager *widgetVisbilityManager; // @synthesize widgetVisbilityManager=_widgetVisbilityManager;
@property(nonatomic) id <_WGParentDataSourceManager> parentDataSourceManager; // @synthesize parentDataSourceManager=_parentDataSourceManager;
@property(retain, nonatomic, getter=_plugInDiscoveryToken, setter=_setPlugInDiscoveryToken:) id plugInDiscoveryToken; // @synthesize plugInDiscoveryToken=_plugInDiscoveryToken;
- (void)_endContinuousPlugInDiscovery;
- (void)_beginContinuousPlugInDiscovery;
- (void)_updatePublishedWidgetExtensions;
- (void)_updatePublishedWidgetExtensions:(id)arg1;
- (void)_revokeExtensionWithIdentifier:(id)arg1;
- (void)_updateDataSourceWithExtension:(id)arg1;
- (_Bool)_shouldPublishWidgetExtension:(id)arg1;
- (void)widgetVisibilityDidChange;
- (void)_stop:(id /* block */)arg1;
- (void)_start:(id /* block */)arg1;
@property(readonly, nonatomic) NSArray *dataSources;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
