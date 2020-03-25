//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIViewElement.h>

#import <StoreKitUI/SKUIMenuBarViewElement-Protocol.h>
#import <StoreKitUI/_SKUIMenuBarViewElementConfigurationReloadDelegate-Protocol.h>

@class NSArray, SKUIMenuBarViewElementConfiguration;

__attribute__((visibility("hidden")))
@interface SKUIMenuBarViewElement : SKUIViewElement <_SKUIMenuBarViewElementConfigurationReloadDelegate, SKUIMenuBarViewElement>
{
    NSArray *_titleViewElements;
    SKUIMenuBarViewElementConfiguration *_configuration;
}

+ (Class)_shelfMenuBarViewElementClass;
+ (Class)_titlesMenuBarViewElementClass;
+ (id)supportedFeatures;
@property(retain, nonatomic) SKUIMenuBarViewElementConfiguration *configuration; // @synthesize configuration=_configuration;
// - (void).cxx_destruct;
- (void)_reloadMenuItems;
- (id)titleForMenuItemAtIndex:(NSUInteger)arg1;
- (void)_menuBarViewElementConfigurationRequestsReload:(id)arg1;
- (id)applyUpdatesWithElement:(id)arg1;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;

@end
