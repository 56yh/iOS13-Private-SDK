//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfficeImport/OADGraphic.h>

@class OADMovie, OADOle, OADShapeGeometry;

__attribute__((visibility("hidden")))
@interface OADImage : OADGraphic
{
    OADShapeGeometry *mGeometry;
    OADOle *mOle;
    OADMovie *mMovie;
}

- (id)description;
- (void)createPictureFramePresetGeometry;
- (id)createImageFill;
- (void)changeParentTextListStylePreservingEffectiveValues:(id)arg1;
- (void)setParentTextListStyle:(id)arg1;
- (void)setMovie:(id)arg1;
- (id)movie;
- (void)setOle:(id)arg1;
- (id)ole;
- (void)setGeometry:(id)arg1;
- (id)geometry;
- (id)imageProperties;
- (id)initWithBlipRef:(id)arg1;
- (id)init;

@end

