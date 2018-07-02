export FILES="
$AUTOPROJ_CURRENT_ROOT/install/types/base/base.asn \
$AUTOPROJ_CURRENT_ROOT/install/types/base/userdefs-base.asn \
$AUTOPROJ_CURRENT_ROOT/install/types/base/taste-extended.asn \
$AUTOPROJ_CURRENT_ROOT/install/types/vizkit3d/vizkit3d.asn \
"

echo "Updating DataView.aadl"

taste-update-data-view $FILES
