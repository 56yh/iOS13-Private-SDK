//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class NSString;

__attribute__((visibility("hidden")))
@interface NSCollectionLayoutContainer : NSObject <NSCollectionLayoutContainer>
{
    struct CGSize _contentSize;
    struct NSDirectionalEdgeInsets _contentInsets;
}

@property(nonatomic) struct NSDirectionalEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(readonly, nonatomic) struct NSDirectionalEdgeInsets effectiveContentInsets;
@property(readonly, nonatomic) struct CGSize effectiveContentSize;
@property(readonly, copy) NSString *description;
- (id)initWithContentSize:(struct CGSize)arg1 contentInsets:(struct NSDirectionalEdgeInsets)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

