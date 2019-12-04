//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXReusableObject-Protocol.h>
#import <PhotosUICore/PXSectionedDataSourceManagerObserver-Protocol.h>
#import <PhotosUICore/PXUIViewBasicTile-Protocol.h>

@class NSArray, NSString, PXCMMPeopleSuggestionsDataSourceManager, PXCMMPeopleSuggestionsMediaProvider, PXCMMPosterBannerView, PXCMMViewModel, PXMomentShareStatusPresentation, UIView;
@protocol PXAssetImportStatusManager, PXCMMBannerTileControllerDelegate;

@interface PXCMMBannerTileController : NSObject <PXChangeObserver, PXSectionedDataSourceManagerObserver, PXReusableObject, PXUIViewBasicTile>
{
    unsigned long long _activityType;
    unsigned long long _sourceType;
    PXCMMViewModel *_viewModel;
    id <PXAssetImportStatusManager> _importStatusManager;
    NSArray *_localizedNames;
    PXMomentShareStatusPresentation *_momentShareStatusPresentation;
    id <PXCMMBannerTileControllerDelegate> _delegate;
    PXCMMPosterBannerView *_bannerView;
    PXCMMPeopleSuggestionsMediaProvider *_peopleSuggestionsMediaProvider;
    PXCMMPeopleSuggestionsDataSourceManager *_peopleSuggestionsDataSourceManager;
}

+ (id)new;
@property(retain, nonatomic) PXCMMPeopleSuggestionsDataSourceManager *peopleSuggestionsDataSourceManager; // @synthesize peopleSuggestionsDataSourceManager=_peopleSuggestionsDataSourceManager;
@property(retain, nonatomic) PXCMMPeopleSuggestionsMediaProvider *peopleSuggestionsMediaProvider; // @synthesize peopleSuggestionsMediaProvider=_peopleSuggestionsMediaProvider;
@property(retain, nonatomic) PXCMMPosterBannerView *bannerView; // @synthesize bannerView=_bannerView;
@property(nonatomic) __weak id <PXCMMBannerTileControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_updateLocalizedNamesByViewModel;
- (void)_updatePeopleSuggestionNames;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)prepareForReuse;
- (void)becomeReusable;
- (void)didApplyGeometry:(struct PXTileGeometry)arg1 withUserData:(id)arg2;
@property(readonly, nonatomic) UIView *view;
- (void)_updateContainsUnverifierPersons;
- (void)_configureBannerViewActionButtonWithTitle:(id)arg1;
- (void)_updateLoadingPeopleSuggestions;
- (void)_updateBannerActionButton;
- (void)_updateCounts;
- (void)setPeopleSuggestionDataSourceManager:(id)arg1 mediaProvider:(id)arg2;
- (id)initWithActivityType:(unsigned long long)arg1 sourceType:(unsigned long long)arg2 viewModel:(id)arg3 momentShareStatusPresentation:(id)arg4 importStatusManager:(id)arg5;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

