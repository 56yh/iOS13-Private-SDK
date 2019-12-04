//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ContentKit/WFContentItem.h>

#import <ContentKit/WFContentItemClass-Protocol.h>

@interface WFLocationContentItem : WFContentItem <WFContentItemClass>
{
}

+ (id)countDescription;
+ (id)pluralTypeDescription;
+ (id)typeDescription;
+ (id)contentCategories;
+ (id)outputTypes;
+ (id)ownedTypes;
+ (id)propertyBuilders;
- (_Bool)includesFileRepresentationInSerializedItem;
- (id)preferredFileType;
- (void)generateFileRepresentation:(id /* block */)arg1 options:(id)arg2 forType:(id)arg3;
- (void)generateObjectRepresentations:(id /* block */)arg1 options:(id)arg2 forClass:(Class)arg3;
- (void)getMKMapSnapshotImageForSize:(struct CGSize)arg1 scale:(double)arg2 named:(id)arg3 withCompletionHandler:(id /* block */)arg4;
- (_Bool)getListAltText:(id /* block */)arg1;
- (_Bool)getListSubtitle:(id /* block */)arg1;

@end

