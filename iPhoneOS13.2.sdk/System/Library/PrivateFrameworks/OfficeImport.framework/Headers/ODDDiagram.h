//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfficeImport/OADDrawable.h>

@class NSArray, ODDColorTransform, ODDNodePoint, ODDStyleDefinition;

__attribute__((visibility("hidden")))
@interface ODDDiagram : OADDrawable
{
    ODDNodePoint *mDocumentPoint;
    ODDColorTransform *mColorTransform;
    ODDStyleDefinition *mStyleDefinition;
    NSArray *mEquivalentDrawables;
}

@property(retain, nonatomic) NSArray *equivalentDrawables; // @synthesize equivalentDrawables=mEquivalentDrawables;
- (id)description;
- (id)styleDefinition;
- (id)colorTransform;
- (void)setDocumentPoint:(id)arg1;
- (id)documentPoint;
- (void)setParentTextListStyle:(id)arg1;
- (id)init;

@end

