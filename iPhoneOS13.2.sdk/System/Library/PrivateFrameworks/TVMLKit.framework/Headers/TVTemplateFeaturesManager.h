//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol TVTemplateFeaturesManagerDelegate;

@interface TVTemplateFeaturesManager : NSObject
{
    NSMutableDictionary *_contextsByFeature;
    id <TVTemplateFeaturesManagerDelegate> _delegate;
}

+ (id)featuresManagerForAppDocument:(id)arg1;
@property(nonatomic) __weak id <TVTemplateFeaturesManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (long long)_rankForContext:(id)arg1;
- (id)_contextsForFeature:(id)arg1;
- (id)currentContextForFeature:(id)arg1;
- (void)popContext:(id)arg1 forFeature:(id)arg2;
- (void)pushContext:(id)arg1 forFeature:(id)arg2;

@end

