//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoTimeKitCompanion/NTKEnumeratableFaceCollection-Protocol.h>

@class NSString;
@protocol NTKCGalleryCollectionDelegate;

@interface NTKCGalleryCollection : NSObject <NTKEnumeratableFaceCollection>
{
    NSString *_title;
    id /* block */ _calloutName;
    NSString *_descriptionText;
    id <NTKCGalleryCollectionDelegate> _delegate;
}

+ (id)_galleryCollectionForDevice:(id)arg1 withCollectionIdentifier:(id)arg2 title:(id)arg3 calloutName:(id /* block */)arg4;
+ (id)_bigNumeralsDigitalFacesForDevice:(id)arg1;
+ (id)_bigNumeralsAnalogFacesForDevice:(id)arg1;
+ (id)_blackcombFacesForDevice:(id)arg1;
+ (id)_californiaFacesForDevice:(id)arg1;
+ (id)_whistlerSubdialsFacesForDevice:(id)arg1;
+ (id)_whistlerDigitalFacesForDevice:(id)arg1;
+ (id)_whistlerAnalogFacesForDevice:(id)arg1;
+ (id)_photoFacesForDevice:(id)arg1;
+ (id)_fireWaterFacesForDevice:(id)arg1;
+ (id)_metallicFacesForDevice:(id)arg1;
+ (id)_smokeFacesForDevice:(id)arg1;
+ (id)_breatheFacesForDevice:(id)arg1;
+ (id)_kaleidoscopeFacesForDevice:(id)arg1;
+ (id)_upNextFacesForDevice:(id)arg1;
+ (id)_extraLargeFacesForDevice:(id)arg1;
+ (id)_chronographFacesForDevice:(id)arg1;
+ (id)_timelapseFacesForDevice:(id)arg1;
+ (id)_solarFacesForDevice:(id)arg1;
+ (id)_colorFacesForDevice:(id)arg1;
+ (id)_astronomyFacesForDevice:(id)arg1;
+ (id)_motionFacesForDevice:(id)arg1;
+ (id)_simpleFacesForDevice:(id)arg1;
+ (id)_modularFacesForDevice:(id)arg1;
+ (id)_utilityFacesForDevice:(id)arg1;
+ (id)_numeralsFacesForDevice:(id)arg1;
+ (id)_activityFacesForDevice:(id)arg1;
+ (id)_explorerFacesForDevice:(id)arg1;
+ (id)_zeusFacesForDevice:(id)arg1;
+ (id)_olympusFacesForDevice:(id)arg1;
+ (id)_victoryDigitalFacesForDevice:(id)arg1;
+ (id)_victoryAnalogFacesForDevice:(id)arg1;
+ (id)_newFacesForDevice:(id)arg1;
+ (id)_newFacesExcludingRestrictedForDevice:(id)arg1;
+ (id)_calloutNameForNewFaces:(id)arg1 withDevice:(id)arg2;
+ (id)galleryCollectionsForDevice:(id)arg1;
@property(nonatomic) __weak id <NTKCGalleryCollectionDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *descriptionText; // @synthesize descriptionText=_descriptionText;
@property(copy, nonatomic) id /* block */ calloutName; // @synthesize calloutName=_calloutName;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void)enumerateFaceNamesUsingBlock:(id /* block */)arg1;
- (unsigned long long)indexOfFace:(id)arg1;
- (id)faceAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfFaces;
- (id)newFace;
@property(readonly, nonatomic) _Bool canAddNewFaces;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

