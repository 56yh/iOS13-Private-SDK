//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WorkflowKit/WFEnumerationParameter.h>

@class NSArray, WFTumblrAccessResource;

@interface WFTumblrBlogPickerParameter : WFEnumerationParameter
{
    NSArray *_possibleStates;
    WFTumblrAccessResource *_tumblrAccessResource;
}

+ (id)referencedActionResourceClasses;
+ (void)initialize;
@property(retain, nonatomic) WFTumblrAccessResource *tumblrAccessResource; // @synthesize tumblrAccessResource=_tumblrAccessResource;
- (id)localizedLabelForPossibleState:(id)arg1;
@property(readonly, nonatomic) NSArray *possibleStates; // @synthesize possibleStates=_possibleStates;
- (id)defaultSerializedRepresentation;
- (_Bool)isHidden;
- (void)possibleStatesDidChange;
- (void)updateBlogs;
- (void)wasAddedToWorkflow;
- (void)setActionResources:(id)arg1;
- (Class)singleStateClass;

@end

