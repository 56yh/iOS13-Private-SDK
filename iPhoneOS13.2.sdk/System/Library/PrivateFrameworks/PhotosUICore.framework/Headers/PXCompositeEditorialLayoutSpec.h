//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMapTable;

@interface PXCompositeEditorialLayoutSpec : NSObject
{
    NSArray *_templates;
    long long _minNumberOfRects;
    long long _maxNumberOfRects;
    long long _minNumberOfColumns;
    NSMapTable *_preferredNextTemplatesByCurrentTemplate;
}

+ (id)defaultSpec;
@property(readonly, nonatomic) NSMapTable *preferredNextTemplatesByCurrentTemplate; // @synthesize preferredNextTemplatesByCurrentTemplate=_preferredNextTemplatesByCurrentTemplate;
@property(readonly, nonatomic) long long minNumberOfColumns; // @synthesize minNumberOfColumns=_minNumberOfColumns;
@property(readonly, nonatomic) long long maxNumberOfRects; // @synthesize maxNumberOfRects=_maxNumberOfRects;
@property(readonly, nonatomic) long long minNumberOfRects; // @synthesize minNumberOfRects=_minNumberOfRects;
@property(readonly, nonatomic) NSArray *templates; // @synthesize templates=_templates;
- (id)preferredNextTemplatesForTemplate:(id)arg1;
- (void)prepareBuiltinSpec;
- (id)_init;
- (id)init;

@end

