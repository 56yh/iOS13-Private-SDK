//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TVMLKit/_TVBgImageLoadingViewController.h>

#import <VideosUI/VUIContextMenuTemplateControllerInterface-Protocol.h>

@class IKViewElement, NSString, VUIContextMenuCardView;

__attribute__((visibility("hidden")))
@interface VUIContextMenuTemplateController : _TVBgImageLoadingViewController <VUIContextMenuTemplateControllerInterface>
{
    VUIContextMenuCardView *_cardView;
    IKViewElement *_viewElement;
}

@property(retain, nonatomic) IKViewElement *viewElement; // @synthesize viewElement=_viewElement;
@property(retain, nonatomic) VUIContextMenuCardView *cardView; // @synthesize cardView=_cardView;
- (void)didSelectPreviewTemplateController;
- (void)_updateInteractionMenuItems:(id)arg1;
- (id)_shareActionSheetFromViewElement:(id)arg1;
- (void)viewDidLoad;
- (id)init;
- (void)updateWithViewElement:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

