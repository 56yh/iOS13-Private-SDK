//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosGraph/PGTitleSpecDelegate-Protocol.h>

@class NSSet, NSString, PGTitle, PGTitleSpecCollection;
@protocol PGSpecBasedTitleGeneratorDelegate;

@interface PGSpecBasedTitleGenerator : NSObject <PGTitleSpecDelegate>
{
    NSSet *_moments;
    NSSet *_features;
    PGTitleSpecCollection *_specCollection;
    PGTitle *_title;
    id <PGSpecBasedTitleGeneratorDelegate> _delegate;
    unsigned long long _lineBreakBehavior;
}

@property(nonatomic) unsigned long long lineBreakBehavior; // @synthesize lineBreakBehavior=_lineBreakBehavior;
@property __weak id <PGSpecBasedTitleGeneratorDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) PGTitleSpecCollection *specCollection; // @synthesize specCollection=_specCollection;
@property(retain, nonatomic) NSSet *features; // @synthesize features=_features;
@property(retain, nonatomic) NSSet *moments; // @synthesize moments=_moments;
- (id)titleSpec:(id)arg1 inputForArgument:(id)arg2;
- (id)_titleFromSpecs:(id)arg1;
- (id)_title;
@property(readonly, nonatomic) PGTitle *title; // @synthesize title=_title;
- (id)initWithMoments:(id)arg1 features:(id)arg2 specCollection:(id)arg3;
- (id)initWithMoments:(id)arg1 features:(id)arg2 meaningLabel:(id)arg3 isAggregation:(_Bool)arg4;
- (id)initWithMoments:(id)arg1 meaningLabel:(id)arg2;
- (id)initWithMoments:(id)arg1 memoryCategory:(unsigned long long)arg2 subcategory:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

