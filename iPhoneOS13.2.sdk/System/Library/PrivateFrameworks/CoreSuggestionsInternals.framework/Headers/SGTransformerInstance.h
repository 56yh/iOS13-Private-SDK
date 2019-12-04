//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PMLSessionDescriptor;
@protocol PMLTransformerProtocol;

@interface SGTransformerInstance : NSObject
{
    PMLSessionDescriptor *_sessionDescriptor;
    id <PMLTransformerProtocol> _transformer;
    Class _modelClass;
}

+ (id)defaultSessionDescriptorForModelId:(id)arg1 featureVersion:(id)arg2 language:(id)arg3 windowAndNgrams:(id)arg4;
+ (id)defaultWindowAndNgrams;
@property(retain, nonatomic) Class modelClass; // @synthesize modelClass=_modelClass;
@property(retain, nonatomic) id <PMLTransformerProtocol> transformer; // @synthesize transformer=_transformer;
@property(retain, nonatomic) PMLSessionDescriptor *sessionDescriptor; // @synthesize sessionDescriptor=_sessionDescriptor;
- (id)trainingFeaturesOf:(id)arg1;
- (id)initWithTransformer:(id)arg1 sessionDescriptor:(id)arg2 modelClass:(Class)arg3;

@end
