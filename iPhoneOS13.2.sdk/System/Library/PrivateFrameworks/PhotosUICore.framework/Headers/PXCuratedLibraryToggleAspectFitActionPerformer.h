//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXCuratedLibraryActionPerformer.h>

@class PXGLayout;

@interface PXCuratedLibraryToggleAspectFitActionPerformer : PXCuratedLibraryActionPerformer
{
    PXGLayout *_layout;
}

@property(readonly, nonatomic) __weak PXGLayout *layout; // @synthesize layout=_layout;
- (void)performActionWithCompletionHandler:(id /* block */)arg1;
- (id)initWithActionType:(id)arg1 viewModel:(id)arg2;
- (id)initWithViewModel:(id)arg1 layout:(id)arg2;

@end
