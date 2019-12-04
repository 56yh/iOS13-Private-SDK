//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <StoreKitUI/SKUIItemStateCenterObserver-Protocol.h>
#import <StoreKitUI/SKUIProductPageChildViewController-Protocol.h>
#import <StoreKitUI/SKUIScreenshotsDelegate-Protocol.h>
#import <StoreKitUI/SKUITableViewSectionDelegate-Protocol.h>

@class NSMutableArray, NSOperationQueue, NSString, SKUIClientContext, SKUILayoutCache, SKUIProductPage, SKUIProductPageHeaderViewController, SKUIProductPageTableHeaderOnlySection, SKUIProductPageTableTextBoxSection, SKUIProductPageTableViewController, SKUIResourceLoader, UIScrollView;
@protocol SKUIProductPageChildViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface SKUIProductPageDetailsViewController : UIViewController <SKUIScreenshotsDelegate, SKUIItemStateCenterObserver, SKUITableViewSectionDelegate, SKUIProductPageChildViewController>
{
    _Bool _askPermission;
    SKUIClientContext *_clientContext;
    SKUIProductPageTableHeaderOnlySection *_copyrightSection;
    id <SKUIProductPageChildViewControllerDelegate> _delegate;
    SKUIProductPageTableTextBoxSection *_descriptionSection;
    NSOperationQueue *_operationQueue;
    SKUIProductPage *_productPage;
    SKUIResourceLoader *_resourceLoader;
    SKUIProductPageTableHeaderOnlySection *_screenshotsSection;
    NSMutableArray *_sections;
    SKUIProductPageTableTextBoxSection *_storeNotesSection;
    SKUIProductPageTableViewController *_tableViewController;
    SKUILayoutCache *_textLayoutCache;
    SKUIProductPageTableTextBoxSection *_whatsNewSection;
}

+ (double)defaultPageWidthForUserInterfaceIdiom:(long long)arg1;
@property(readonly, nonatomic) SKUIProductPage *productPage; // @synthesize productPage=_productPage;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(nonatomic) __weak id <SKUIProductPageChildViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
@property(nonatomic) _Bool askPermission; // @synthesize askPermission=_askPermission;
- (id)_whatsNewSection;
- (id)_textLayoutRequestWithText:(id)arg1 widthOffset:(double)arg2;
- (id)_tableViewController;
- (id)_storeNotesSection;
- (id)_screenshotsSection;
- (id)_resourceLoader;
- (id)_parentBundlesSection;
- (id)_infoSection;
- (id)_featuresSection;
- (id)_descriptionSection;
- (id)_copyrightSection;
- (void)_configureSwooshSection:(id)arg1;
- (id)_bundledAppsSection;
- (void)_addTapRecognizerForView:(id)arg1 action:(SEL)arg2;
- (void)_expandSection:(id)arg1;
- (id)tableViewForTableViewSection:(id)arg1;
- (void)itemStateCenterRestrictionsChanged:(id)arg1;
- (void)screenshotsWillBeginDragging:(id)arg1;
@property(readonly, nonatomic) UIScrollView *scrollView;
@property(retain, nonatomic) SKUIProductPageHeaderViewController *headerViewController;
- (void)loadView;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)dealloc;
- (id)initWithProductPage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

