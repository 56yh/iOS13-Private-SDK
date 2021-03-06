//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>


@class NSArray, NSDictionary, NSLayoutConstraint, UICollectionView, UILabel, UIScrollView;

@interface PKRecognitionDataCollectionViewController : UIViewController <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource>
{
    NSArray *_drawings;
    NSArray *_drawingImages;
    NSDictionary *_metadata;
    UIScrollView *_scrollView;
    UILabel *_descriptionLabel;
    UICollectionView *_collectionView;
    NSLayoutConstraint *_collectionViewHeightConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *collectionViewHeightConstraint; // @synthesize collectionViewHeightConstraint=_collectionViewHeightConstraint;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(retain, nonatomic) NSArray *drawingImages; // @synthesize drawingImages=_drawingImages;
@property(retain, nonatomic) NSArray *drawings; // @synthesize drawings=_drawings;
// - (void).cxx_destruct;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)synchronousImageForDrawing:(id)arg1;
- (id)saveDataForDrawings:(id)arg1 baseURL:(id)arg2 shouldSaveRecognitionData:(BOOL)arg3;
- (void)openTapToRadarWithTempDirectoryURL:(id)arg1;
- (void)openAppleFeedbackAssistantWithTempDirectoryURL:(id)arg1;
- (void)sendRadarButtonTapped:(id)arg1;
- (void)openURL:(id)arg1;
- (void)cancelButtonTapped:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)adjustCollectionViewHeight;
- (void)viewDidLoad;
- (id)initWithDrawings:(id)arg1 metadata:(id)arg2;

@end

