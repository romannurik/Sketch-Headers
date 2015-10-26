#import "MSModelObject.h"

@class MSDocumentData;

@interface MSModelBase : MSModelObject
{
    id _cachedImmutableModelObject;
    BOOL _isLightweightCopy;
    MSModelBase *_parentObject;
    MSModelObject *_lightweightCopy;
    MSDocumentData *_documentData;
}

+ (void)performWithoutUpdateEvents:(CDUnknownBlockType)arg1;
@property(nonatomic) __weak MSDocumentData *documentData; // @synthesize documentData=_documentData;
@property(nonatomic) BOOL isLightweightCopy; // @synthesize isLightweightCopy=_isLightweightCopy;
@property(retain, nonatomic) MSModelObject *lightweightCopy; // @synthesize lightweightCopy=_lightweightCopy;
- (void).cxx_destruct;
- (id)makeLightweightCopy;
- (id)copyLightweight;
- (void)invalidateLightweightCopy:(id)arg1;
- (id)undoManager;
- (void)setUndoActionSenderAndName:(id)arg1;
- (void)setUndoActionName:(id)arg1;
- (BOOL)isUndoing;
- (void)registerUndoNamed:(id)arg1 action:(CDUnknownBlockType)arg2;
- (void)childDidChangeNotification:(id)arg1;
- (void)notifyParentsOfPropertyChange:(id)arg1;
- (void)breakConnectionWith:(id)arg1;
@property(nonatomic) __weak MSModelBase *parentObject; // @synthesize parentObject=_parentObject;
- (id)parentGroupRecursive;
- (id)parentGroup;
- (void)setAsParentOnChildren;
- (id)rootModelObject;
@property(readonly, nonatomic) id immutableModelObject;
- (id)copyIncludingObjectIDS;
- (void)prepareCopy:(id)arg1;
- (void)prepareObjectCopy:(id)arg1;
- (id)copyEmpty;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodePropertiesWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)initEmptyObject;
- (id)init;
- (void)objectDidChange;
@property(retain, nonatomic) id cachedImmutableModelObject;
- (void)invalidateCachedImmutableModelObjects;

@end
